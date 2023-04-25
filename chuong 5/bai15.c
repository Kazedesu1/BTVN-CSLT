
#include <stdio.h>
int fibonaci(int i)
{
    if(i==1)
    return 1;
    if(i==2)
    return 1;
    else 
    return fibonaci(i-1) + fibonaci(i-2);
}

int main()
{
    int a;
    printf("nhap vao 2 so nguyen n: ");
    scanf("%d",&a);
    
    printf("so fibonaci thu n la: %d",fibonaci(a));
        
    
    
}
