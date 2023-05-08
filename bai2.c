
#include <stdio.h>

int snt(int n)
{   int j=0;
    for(int i=2;i<n;i++)
    if(n%i==0)
    {
    return 0;
    j++;
    break;
    }
    if(j==0)
    return 1;
}

int main ()
{
    int m,n;
    for(n=1;n<=1000;n++)
    {
    if(snt(n)==1)
    {
    printf("%d ",n);
    m++;
    
    if(m%10==0)
    printf("\n");
    }
    }
}       

