#include <stdio.h>
void nhapn(int *n)
{   
    
    do{
        printf("nhap vao so phan tu: ");
        scanf("%d",&*n);
    }while (*n<2||*n>50);
    
}

void nhapmang(int n,float a[])
{   
    printf("nhap vao cac phan tu cua mang: ");
    for(int i=0;i<n;i++)
    scanf("%f", &a[i]);
    
}

void inmang(int n,float a[])
{   int i;
    for(i=0;i<n;i++)
    printf("%f ",a[i]);
    
}

void sapxep(int n,float a[])
{   int i,j;
    float temp;
    for(i=0;i<n;i++)
    for(j=0;j<i;j++)
    if(i>j)
    {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    }
    
}
int main ()
{
    int n;
    float a[50];
    nhapn(&n);
    nhapmang(n,a);
    printf("mang vua nhap la: ");
    inmang(n,a);
    sapxep(n,a);
    
    printf("\nmang vua xap sep la: ");
    inmang(n,a);
    return 0;
}       


