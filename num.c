#include <stdio.h>

int main() {
    int num0, num1, sum;
    
    printf("Enter the 1st number: ");
    scanf("%d", &num0);
    
    printf("Enter the 2nd number: ");
    scanf("%d", &num1);
    
    sum = num0 + num1;
    
    printf("The sum of %d and %d is %d.", num0, num1, sum);
    
    return 0;
}
