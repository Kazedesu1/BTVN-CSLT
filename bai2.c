
#include <stdio.h>
int fb(int n)
{
    if(n==1 || n==2)
    return 1;
    else
    return fb(n-1)+fb(n-2);
}

int main()
{
    int n,b,i,sum;
    printf("nhap vao so n:");
    scanf("%d",&n);
    if(n%2==0)
    b=0;
    else b=1;
    for(i=1;i<=n;i++)
    if(i%2==b)
    sum+= fb(i);
    printf("tong S la: %d",sum);
    return 0;
}
