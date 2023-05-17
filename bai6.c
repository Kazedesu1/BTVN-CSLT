#include <stdio.h>
#include <math.h>

float siuuu(float n)
{
    if(n==1)
    return sqrt(pow(n,2));
    else
    return sqrt(pow(n,2)+pow(siuuu(n-1),2));
}

int main()
{
    float n;
    printf("nhap vao so n:");
    scanf("%f",&n);
    printf("tong S(n) la: %f",siuuu(n));
    return 0;
}
