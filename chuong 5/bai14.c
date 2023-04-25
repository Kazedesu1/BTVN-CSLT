
#include <stdio.h>

int main()
{
    int a,b,i,j;
    printf("nhap vao 2 so nguyen a b: ");
    scanf("%d%d",&a,&b);
    for(i=a;i>=1;i--)
    {    if(a%i==0 && b%i == 0)
      {  printf("uoc chung lon nhat cua a,b la: %d\n",i);
        break;
      }
    }
   for(j=a;j<=a*b;j++)
   {    if(j%a==0 && j%b == 0)
      {  printf("boi chung nho nhat cua a,b la: %d",j);
        break;
      }
    }
    
    
}
