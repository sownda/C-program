#include <stdio.h>


int lcm(int a, int b);


int main()
{
    int num1, num2, LCM;

    
    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &num1, &num2);
    
   
    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
        
    printf("LCM of %d and %d = %d", num1, num2, LCM);
    
    return 0;
}
