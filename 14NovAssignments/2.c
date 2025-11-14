/*
check whether a chacter is an alphabet or not
65 to 122 in ASCII are alphabets
*/
#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    int val = (int)ch;
    if (val >= 54 && val <= 122)
    {
        printf("%c is an alphabet", ch);
    } else{
        printf("%c is not an alphabet", ch);
    }
    
    return 0;
}