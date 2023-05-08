
#include <stdio.h>
#include <math.h>
int scp(int n)
{   int j=0;
    for(int i=1;i<=sqrt(n)+1;i++)
    if(n==pow(i,2))
    {
    return 1;
    j++;
    break;
    }
    if(j==0)
    return 0;
}

int main ()
{
    int m,n;
    for(n=1;n<=1000;n++)
    {
    if(scp(n)==1)
    {
    printf("%d ",n);
    m++;
    
    if(m%15==0)
    printf("\n");
    }
    }
}       

