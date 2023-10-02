#include<stdio.h> 
#include<math.h>

// Finding power of number using math library function
int main(){
    
    printf(" Welcome to world of coding of math \n");

     double value1, value2, result;

    printf("Enter the base value : ");
    scanf("%lf",&value1);
    printf("Enter the power value : ");
    scanf("%lf",&value2);

    result = pow(value1,value2);

     printf(" %lf raised to power %lf is = %lf", value1, value2, result);

return 0;
}