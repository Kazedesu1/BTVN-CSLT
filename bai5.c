
#include <stdio.h>
#include <math.h>

float siuuu(float n)
{
    if(n==1)
    return sqrt(3);
    else
    return sqrt(3+siuuu(n-1));
}

int main()
{
    float n;
    printf("nhap vao so n:");
    scanf("%f",&n);
    printf("tong S(n) la: %f",siuuu(n));
    return 0;
}
