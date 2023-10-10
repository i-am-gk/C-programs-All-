#include <stdio.h>

char convertToLowerToUpper(char lowercase) {
    return lowercase - 'a' + 'A';
}

int main() {
    char lowercase;
    
    printf("Enter a lowercase alphabet: ");
    scanf("%c", &lowercase);
    
    char uppercase = convertToLowerToUpper(lowercase);
    
    printf("Uppercase equivalent: %c\n", uppercase);
    
    return 0;
}
