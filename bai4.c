
#include <stdio.h>
float siuuu(float n,float m)
{
    if(n==1)
    return 1/m;
    else
    return n/m +siuuu(n-1,m);
}

int main()
{
    float n;
    printf("nhap vao so n:");
    scanf("%f",&n);
    printf("tong S(n) la: %f",siuuu(n,n));
    return 0;
}
