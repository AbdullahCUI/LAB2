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
    return 0;
}