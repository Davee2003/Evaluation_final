#include <stdio.h>

int main() {
    int num3, num2, sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num3);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    sum = num3 + num2;
    
    printf("The sum of %d and %d is %d.", num3, num2, sum);
    
    return 0;
}
