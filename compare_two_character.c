// Compare two characters (e.g., check if two characters are equal or not).
#include<stdio.h>
int main()
{
    char ch1, ch2; 
    printf("Enter character-1: "); 
    scanf("%c", &ch1); 
    printf("Enter character-2: "); 
    scanf(" %c", &ch2); 

    if (ch1 == ch2) {
        printf("Both characters are equal.\n", ch1, ch2); 
    }
    else {
        printf("Both characters are not equal.\n", ch1, ch2);
    }
    return 0; 
}