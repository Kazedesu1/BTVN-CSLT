#include <stdio.h>


int main()
{   
    int i,n,t;
    printf("nhap vao so nguyen n: ");
    scanf("%d",&n);
    while (n>=2 && n <= 1000)
    {
    for(i=2;i < n;i++)
     {
        if(n%i==0)
        { printf("n khong phai so nguyen to");
        t=1;
        break;
        }
     }
     if(t!=1)
        { printf("n la so nguyen to");
        break;
        }
     break;
    }
     
    return 0;
}