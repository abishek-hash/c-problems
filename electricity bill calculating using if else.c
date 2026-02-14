#include <stdio.h>
int main()
{
    int units,Rate,Bill;
    units=120;
    Rate=5;
    scanf("%d",&units);
    if (units<=100){
     Bill=units*Rate;
    }
    else {
     Bill=(100*5)+((units-100)*5);
    }
    return 0;
}