#include<stdio.h>

int main()
{

    //variable declaring
    
    const float jpn=127.65f;

    const float pound=0.79f;

    float exchange_rate=0.10f;

    float USD;

    float JPN_convert, Pound_convert,remaing_usd;

    //promote value of USD

    printf("Please Enter USD:");

    //to read USD from user

    scanf("%f", &USD);

    //start conversion

    exchange_rate=USD*exchange_rate;

    remaing_usd= USD - exchange_rate;

    JPN_convert=(remaing_usd*0.5*jpn);

    Pound_convert=(remaing_usd*0.5*pound);

    //output on console

    printf("Your total USD is :%f\n", USD);

    printf("Your remaing USD is :%f\n",remaing_usd);

    printf("Exhange rate is :%f\n",exchange_rate);

    printf("You have %f of Britist Pound\n",Pound_convert);

    printf("You have %f of Japanier yen:",JPN_convert);
    return 0;
}