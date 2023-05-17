
#include <stdio.h>
float siuuu(float n)
{
    if(n==1)
    return 0.5;
    else
    return 1/(n*(n+1)) + siuuu(n-1);
}

int main()
{
    float n;
    printf("nhap vao so n:");
    scanf("%f",&n);
    printf("tong S(n) la: %f",siuuu(n));
    return 0;
}
