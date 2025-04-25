//fahrenheit to Celcius
//centigrade to fahrenheit
#include <stdio.h>

int main()
{
    float lower, upper, step;
    float lowerc, upperc, stepc;
    float fahr, cel;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Fahr\tCelcius\n");
    while(fahr < upper)
    {
        cel = (5.0/9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, cel);
        fahr = fahr + step;
    }
    
    printf("Celcius\tFahrenheit\n");
    
    upperc = 100;
    cel = lowerc;
    stepc = 10;
    while(cel < upperc)
    {
        fahr = (9.0/5.0) * cel + 32;
        printf("%3.0f\t%6.1f\n",cel,fahr);
        cel = cel + stepc;
    }
    
    return 0;
}
