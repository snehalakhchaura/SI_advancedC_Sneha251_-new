#include <stdio.h>
#include <string.h>

int main() {
    char str[10][50], temp[50];
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    printf("Enter the strings:\n");
    for(i = 0; i < n; i++)
        fgets(str[i], sizeof(str[i]), stdin);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nStrings in Alphabetical Order:\n");
    for(i = 0; i < n; i++)
        printf("%s", str[i]);

    return 0;
}