#include<stdio.h>
int main()
{
    int num1, num2, num3;

    //Ask user to input any three integer numbers
    printf("\nEnter Value of num1, num2 and num3: ");
    //Store input value in variables for comparsion
    scanf("%d%d%d",&num1, &num2, &num3);

    if((num1>num2)&&(num1>num3))
        printf("\n Number 1 is greatest");
    else if((num2>num3)&&(num2>num1))
        printf("\n Number 2 is greatest");
    else
        printf("\n Number 3 is greatest");

    return 0;
}
