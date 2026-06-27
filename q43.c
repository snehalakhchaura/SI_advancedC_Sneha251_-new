//rotate array left by n position 
#include <stdio.h>

int main() {
  int n, d, i, temp;

    scanf("%d", &n);
   int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &d);

    while(n--) {
        temp = a[0];
        for(i = 0; i < n - 1; i++)
            a[i] = a[i + 1];
        a[n - 1] = temp;
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}