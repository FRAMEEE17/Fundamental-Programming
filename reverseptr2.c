#include <stdio.h>
#include <string.h>

void reverseString(char* str)
{
 
 char *begin_ptr, *end_ptr, ch;
 int l = strlen(str);
 begin_ptr = str;
 end_ptr = str;

 for (int i = 0; i < l - 1; i++)
  end_ptr++;

 for (int i = 0; i < l / 2; i++) {
  ch = *end_ptr;
  *end_ptr = *begin_ptr;
  *begin_ptr = ch;

  begin_ptr++;
  end_ptr--;
 }
}

int main()
{
 char str[100] ;
 printf("Input a string : ", str);
 scanf("%s",str);
 reverseString(str);
 printf("reverse of string: %s", str);
 return 0;
}
