
#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],n,m,i,j,k,sum,max,min,sumcot,sumdong,temp;
    printf("nhập vào số dòng: ");
    scanf("%d",&n);
    printf("nhập vào số cột: ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
    printf("a[%d][%d] = ",i,j);
    scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    printf("%d ",a[i][j]);
    printf("\n");
   }
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    sum +=a[i][j];
    printf("tổng của mảng là: %d ",sum);

    max=min=a[0][0];
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
    if(a[i][j]>max)
    max=a[i][j];
    if(a[i][j]<min)
    min=a[i][j];
    }
    printf("\ngiá trị lớn nhất của mảng là: %d\ngiá trị nhỏ nhất của mảng là: %d ",max,min);
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    sumdong +=a[i][j];
    printf("\ntổng của dòng %d là: %d ",i+1,sumdong);
    sumdong =0;
    }
    for(j=0;j<m;j++)
    {
    for(i=0;i<n;i++)
    sumcot +=a[i][j];
    printf("\ntổng của cột %d là: %d ",j+1,sumcot);
    sumcot =0;
    }
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    b[i][j]=c[i][j]=a[i][j];
    
    printf("\nma trận xắp sếp theo thứ tự tăng dần từng dòng là:\n");
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    for(k=0;k<j;k++)
    {
        if (b[i][j]<=b[i][k])
        {
        temp = b[i][j];
        b[i][j] = b[i][k];
        b[i][k] = temp;
        }
    }
    for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    printf("%d ",b[i][j]);
    printf("\n");
   }
    
    printf("\nma trận xắp sếp theo thứ tự tăng dần từng cột là:\n");
    for(j=0;j<m;j++)
    for(i=0;i<n;i++)
    for(k=0;k<i;k++)
    {
        if (c[i][j]<=c[k][j])
        {
        temp = c[i][j];
        c[i][j] = c[k][j];
        c[k][j] = temp;
        }
    }
    for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    printf("%d ",c[i][j]);
    printf("\n");
   }
   printf("\nma trận tổng của 2 ma trận trên là:\n");
    for(j=0;j<m;j++)
    for(i=0;i<n;i++)
    a[i][j]=b[i][j]+c[i][j];
    for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    printf("%d ",a[i][j]);
    printf("\n");
   }
        return 0;
}
