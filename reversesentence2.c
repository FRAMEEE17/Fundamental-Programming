#include<stdio.h>
#include<string.h>
int main(){
   char stmt[300];
   int i;
   scanf("%[^\n]s",stmt);
   printf("\nSentence Before Reverse: %s",stmt);
   printf("\nSentence After Reverse: ");
   for(i=strlen(stmt)-1;i>=0;i--){
        printf("%c",stmt[i]);
   }

   return 0;
}
