
#include <stdio.h>

int main()
{   
    int n,i;
    printf("Nhap vao so nguyen n: ");
    scanf("%d",&n);
    while(n>=10 && n<= 100)
    {
    printf("uoc cua %d la: ",n);
    for(i = 1;i<= n;i++)
    {    if(n%i==0)
        printf("%d ",i);
    }
    break;
}
    return 0;
}
