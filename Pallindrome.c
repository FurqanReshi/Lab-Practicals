#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPal(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    if (isPal(input)) {
        printf("%s is a pallindrome", input);
    } else {
        printf("%s is not a pallindrome", input);
    }
    return 0;
}