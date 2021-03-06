#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h> // uint64_t

#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) > (b) ? (b) : (a))

int get_int2(int *a1, int *a2) {
  char buf[100];
  if(!fgets(buf, 100, stdin)) return -1;
  return sscanf(buf, "%d %d", a1, a2);
}

int get_int4(int *a1, int *a2, int *a3, int *a4) {
  char buf[100];
  if(!fgets(buf, 100, stdin)) return -1;
  return sscanf(buf, "%d %d %d %d", a1, a2, a3, a4);
}


enum {
    COMMAND_UPDATE,
    COMMAND_GET,
};

#define QUERY_MAX 100000
#define NUM_MAX (1<<17)
#include <limits.h>
#define INF INT_MAX

struct range {
    int start;
    int end;
};

int is_overlap(struct range r1, struct range r2) {
    return r1.end >= r2.start && r2.end >= r1.start;
}

int is_contain(struct range this, struct range in) {
    return in.start <= this.start && this.end <= in.end;
}

void update(int *seg, struct range r, int val, int node, struct range this) {
#ifdef DEBUG
    printf("update(seg, (%d,%d), %d, %d, (%d,%d)) -> %d\n", r.start, r.end,
        val, node, this.start, this.end, is_contain(this, r)
    );
#endif
    if(is_contain(this, r)) {
        seg[node] = val;
    } else if (is_overlap(r, this)) {
        struct range left = {this.start, (this.start+this.end)/2};
        struct range right = {left.end+1, this.end};
        update(seg, r, val, node*2, left);
        update(seg, r, val, node*2+1, right);
    }
    // if not overlap, do nothing
    return;
}

int get(int *seg, int num, int idx) {
    int node = num + idx;
    int ans = -1;
    while(node) {
        ans = max(ans, seg[node]);
        node /= 2;
    }
    return ans;
}

#define ROOT_NODE 1
int main(void) {
    int _num, queries;
    int num = 1;
    get_int2(&_num, &queries);
    while(_num > num) num *= 2;

    int i;

    static int ans[QUERY_MAX];
    static int val[QUERY_MAX];
    int aidx = 0;
    int vidx = 0;
    static int seg[NUM_MAX*2];
    for(i =  0; i < NUM_MAX*2; i++) seg[i] = -1;
    struct range whole = {0, num-1};
    for(i = 0; i < queries; i++) {
        int type, arg1, arg2, arg3;
        get_int4(&type, &arg1, &arg2, &arg3);
        switch(type) {
            case COMMAND_UPDATE:
                {
                    struct range r = {arg1, arg2};
                    int x = arg3;
                    update(seg, r, vidx, ROOT_NODE, whole);
                    val[vidx++] = x;
               }
                break;
            case COMMAND_GET:
                {
                    int res = get(seg, num, arg1);
                    ans[aidx++] = res == -1 ? INF : val[res];
                }
                break;
            default:
                break;
        }
    }

    for(i = 0; i < aidx; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
