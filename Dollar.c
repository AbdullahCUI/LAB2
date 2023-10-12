#include<stdio.h>

int main()
{
    const float jpy = 127.65;
    const float pound = 0.79;
    float exchange_rate = 0.10;

     float USD;
    float JPY_Convert,Pound_convert,remaning_USD;

    printf("Enter the USD : ");
    scanf("%f",&USD);

    exchange_rate = USD*exchange_rate;

    remaning_USD = USD - exchange_rate;

    JPY_Convert =(remaning_USD*0.5*jpy);

    Pound_convert = (remaning_USD*0.5*pound);

    printf("Your total USD is : %f \n",USD);
    printf("Your remaning USD is %f \n",remaning_USD);
    printf("Your Exchange rate is : %f \n",exchange_rate);
    printf("You have %f British Pound \n",Pound_convert);
    printf("You have %f Japines yen \n",JPY_Convert);

    return 0;
}