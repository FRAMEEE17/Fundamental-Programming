#include <stdio.h>

int main()
{
    char text[50] ;
    char reversetext[50];
    char *textptr = text;
    char *reverseptr = reversetext;
    int charcounter = -1;
    printf("Input a string : ");
    scanf("%s",text);
    while(*textptr){
        textptr++;
        charcounter++;
    }
    while(charcounter>=0){
        textptr--;
        *reverseptr = *textptr;
        reverseptr++;
        --charcounter;
    }
    *reverseptr = '\0';
    printf("reverse of string : %s",reversetext);

    return 0;
}
