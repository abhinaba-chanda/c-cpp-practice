#include <assert.h>
#include <stdio.h>

static int binary_search(const int *a, int n, int target) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == target) return mid;
        if (a[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int main(void) {
    int a[] = {1, 3, 5, 7, 9, 11};
    assert(binary_search(a, 6, 7) == 3);
    assert(binary_search(a, 6, 4) == -1);
    printf("index of 9: %d\n", binary_search(a, 6, 9));
    return 0;
}
