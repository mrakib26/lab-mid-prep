// Find the type of character: vowel, consonant, digit, special character.
#include<stdio.h>
int main()
{
    char ch; 
    printf("Enter any character: "); 
    scanf("%c", &ch); 

    if (ch>='0' && ch<='9') {
        printf("'%c' is a digit.\n", ch); 
    }
    else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
        printf("'%c' is a vowel.\n", ch); 
        }
        else {
            printf("'%c' is a consonant.\n",ch); 
        }
    }
    else {
        printf("'%c' is a special character.\n", ch); 
    }

    return 0; 
}