
#include <stdio.h>

int shc(int n)
{ 
    int i,sum;
    for(i=1;i<n;i++)
    if(n%i==0)
    sum+=i;
    if(sum==n)
    printf("day la so hoan chinh");
    else
    printf("day khong la so hoan chinh");
}

int main()
{
    int n;
    do
    {
        printf("nhap vao 1 so tu 1 den 1000: ");
        scanf("%d",&n);
    }while(n<1 || n>1000);
    shc(n);
    return 0;
}