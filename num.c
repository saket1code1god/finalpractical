#include <stdio.h>

int main() {
    int num0, num1, sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num0);
    
    printf("Enter the second number: ");
    scanf("%d", &num1);
    
    sum = num0 + num1;
    
    printf("The sum of %d and %d is %d.", num0, num1, sum);
    
    return 0;
}
