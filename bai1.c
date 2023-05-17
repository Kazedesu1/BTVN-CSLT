
#include <stdio.h>
int giaithua(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return n*giaithua(n-1);
}

int main()
{
    int n,b,i,sum;
    scanf("%d",&n);
    if(n%2==0)
    b=0;
    else b=1;
    for(i=1;i<=n;i++)
    if(i%2==b)
    sum+= giaithua(i);
    printf("%d",sum);
    return 0;
}
