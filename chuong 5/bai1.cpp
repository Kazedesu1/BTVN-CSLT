
#include <stdio.h>

int main()
{   
    int n,i,t;
    printf("Nhap vao so nguyen n: ");
    scanf("%d",&n);
    for(i = 1;i<= n;i++)
        t +=i;
    printf("S(n) = %d",t);

    return 0;
}
