#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i=0;

    gets(s1);
    gets(s2);

    while(s1[i]==s2[i] && s1[i]!='\0')
        i++;

    if(s1[i]==s2[i])
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}