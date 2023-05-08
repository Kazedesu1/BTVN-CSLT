#include <stdio.h>
void nhapn(int *n)
{   
    
    do{
        scanf("%d",&*n);
    }while (*n<2||*n>50);
    
}

void nhapmang(int n,int m,float a[][50])
{   
    printf("nhap vao cac phan tu cua mang:\n");
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        printf("a[%d][%d] = ",i,j);
    scanf("%f", &a[i][j]);
    }
    
}

void inmang(int n,int m,float a[][50])
{   int i;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    printf("%f ",a[i][j]);
    printf("\n");
    }
    
}
void sapxepdong(int n,int m,float b[][50])
{   int temp,i,j,k;
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
}
void sapxepcot(int n,int m,float c[][50])
{   int temp,i,j,k;
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
}

int main ()
{
    int m,n;
    float a[50][50],b[50][50];
    printf("nhap vao so hang: ");
    nhapn(&n);
    printf("nhap vao so cot: ");
    nhapn(&m);
    nhapmang(n,m,a);
    printf("mang vua nhap la: \n");
    inmang(n,m,a);
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        b[i][j]=a[i][j];
    }
    sapxepdong(n,m,a);
    sapxepcot(n,m,b);
    printf("mang xap xep theo dong la: \n");
    inmang(n,m,a);
    printf("mang xap xep theo cot la: \n");
    inmang(n,m,b);
    return 0;
}       


