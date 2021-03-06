#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h> // uint64_t

#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) > (b) ? (b) : (a))
#define BUF_SIZE 100
#define DIVISOR 1000000007

int get_int(void) {
  int num;
#ifdef BUF_SIZE
  char line[BUF_SIZE];
  if(!fgets(line, BUF_SIZE, stdin)) return 0;
  sscanf(line, "%d", &num);
#else
#error
#endif
  return num;
}

// <arr[0]> <arr[1]> .. <arr[size-1]>
int fget_array(int *arr, int size) {
#ifdef BUF_SIZE
    char line[BUF_SIZE];
    int i;
    if(!fgets(line, BUF_SIZE, stdin)) return -1;
    char *tmp = strtok(line, " ");
    int k = strtol(tmp, NULL, 10);
    for(i = 0; i < k; i++) {
        char *tmp = strtok(NULL, " ");
        arr[i] = strtol(tmp, NULL, 10);
    }
#else
#error
#endif
    return k;
}

#define NUM_MAX 28
#define K_MAX 18

int main(void) {
    int arr[NUM_MAX+1];
    int num = get_int();
    int k = fget_array(arr, K_MAX+1);
    int i;
    int match = 0;
    for(i = 0; i < k; i++) {
        match |= (1<<arr[i]);
    }
    int pat;
    // see https://kimiyuki.net/blog/2017/07/16/enumerate-sets-with-bit-manipulation/
    for(pat = 0;; pat = (pat-match)&match) {
        printf("%d:", pat);
        for(i = 0; i < num; i++) {
            if(!(pat & (1<<i))) continue;
            printf(" %d", i);
        }
        putchar('\n');
        if(pat == match) break;
    }
    return 0;
}
