#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h> // int64_t

#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) > (b) ? (b) : (a))

int get_int(void) {
  int num;
  scanf("%d", &num);
  return num;
}

// <arr[0]> <arr[1]> .. <arr[size-1]>
int fget_array(int *arr, int size) {
    int i;
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    return 0;
}

#define NUM_MAX 100000

int main(void) {
    int num = get_int();
    static int arr[NUM_MAX];
    fget_array(arr, num);
    int i;
    static int map[NUM_MAX+2];
    int ans = 0;
    for(i = 0; i < num; i++) {
        if(arr[i] > NUM_MAX) {
            ans++; // remove only
        } else {
            map[arr[i]]++;
        }
    }

    for(i = 0; i <= NUM_MAX; i++) {
        if(map[i] >= i) {
            ans += map[i]-i;
        } else {
            ans += map[i];
        }
    }
    printf("%d\n", ans);
    return 0;
}
