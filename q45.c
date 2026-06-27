//binary search 
#include <stdio.h>

int main() {
    int n, i, key;

    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    int lower = 0, high = n - 1, mid;

    while(lower <= high) {
        mid = (lower + high) / 2;

        if(a[mid] == key) {
            printf("Found at position %d", mid + 1);
            return 0;
        } else if(key > a[mid])
            lower = mid + 1;
        else
            high = mid - 1;
    }

    printf("Not Found");

    return 0;
}