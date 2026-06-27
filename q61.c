#include <stdio.h>

int main() {
    char str[100];
    int i, choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("1. Uppercase\n2. Lowercase\nEnter your choice: ");
    scanf("%d", &choice);

    for(i = 0; str[i] != '\0'; i++) {
        if(choice == 1) {
            if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        }
        else if(choice == 2) {
            if(str[i] >= 'A' && str[i] <= 'Z')
             str[i] = str[i] + 32;
        }
    }

    printf("Result: %s", str);

    return 0;
}