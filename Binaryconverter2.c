#include <stdio.h>
int main(){
    int num, rem, binary = 0, temp = 1;
    
    
    printf("Enter a decimal number : ");
    scanf("%d", &num);
    
    while (num != 0){
        rem = num % 2;
        num = num / 2;
        binary = binary + (rem * temp);
        temp = temp * 10;
    }
    
    
    printf("Equivalent binary number is : %d", binary);
    return 0;
}
