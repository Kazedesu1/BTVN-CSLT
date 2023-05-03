#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[101],b[100],c[100],l[100],n,sum,max,min,temp,khac,chan,le,them,vtt,temp1,vtx,max2,gan01,gan02,tong,t;
    printf("số phần tử của mảng: ");
    scanf("%d",&n);
    if(n>=1 && n<=100)
    {
    printf("nhập vào mảng: ");
    for(int i =0;i<n;i++)
    scanf("%d",&a[i]);
    max=min=a[0];
    printf("mảng vừa nhập là: ");
    for(int i =0;i<n;i++)
    {
    printf("%d ",a[i]);
    if (a[i]>= max)
    max =a[i];
    if (a[i]<= min)
    min =a[i];
    
    }
    printf("\ntổng của n phần tử đó là: ");
    for(int i =0;i<n;i++)
    sum+=a[i];

    printf("%d ",sum);
    printf("\nsố lớn nhất là: %d chỉ số trong mảng là: ",max);
    for(int i =0;i<n;i++)
    if(a[i]==max)
    printf("a[%d] ",i);
    printf("\nsố nhỏ nhất là: %d chỉ số trong mảng là: ",min);
    for(int i =0;i<n;i++)
    {
        b[i]=a[i];
    if(a[i]==min)
    printf("a[%d] ",i);
    }
    
    for(int i =0;i<n;i++)
    for(int j =0;j<i;j++)
    if(b[i]<=b[j])
    {
    temp = b[j];
    b[j] = b[i];
    b[i] = temp;
    }
    printf("\nmảng sắp xếp theo thứ tự tăng dần là: ");
    for(int i =0;i<n;i++)
    printf("%d ",b[i]);
    
    for(int i =0;i<n;i++)
    if(a[i]!=b[i])
    khac++;
    printf("\nsố phần tử khác biệt là: %d",khac);
    
    for(int i =0;i<n;i++)
    if(a[i]%2==0)
    {
    c[chan]=a[i];
    chan++;
    }
    else 
    {
    l[le]=a[i];
    le++;
    }
    printf("\nmảng số chẵn là: ");
    for(int i =0;i<chan;i++)
    printf("%d ",c[i]);
    printf("\nmảng số lẻ là: ");
    for(int i =0;i<le;i++)
    printf("%d ",l[i]);
    printf("\nthêm phần tử: ");
    scanf("%d",&them);
    printf("vào vị trí: ");
    scanf("%d",&vtt);
    for(int i =n;i > vtt;i--)
        a[i]=a[i-1];
        a[vtt]=them;
    printf("mảng vừa thêm là: ");
    for(int i =0;i<=n;i++)
    {
    
    printf("%d ",a[i]);
    }
    printf("\nxóa phần tử ở vị trí: ");
    scanf("%d",&vtx);
    for(int i =vtx;i < n;i++)
        a[i]=a[i+1];
    
    printf("mảng vừa xóa là: ");
    for(int i =0;i<n;i++)
    printf("%d ",a[i]);
    max= a[0];
    for(int i=0;i<n;i++)
        if(a[i]>max)
        max = a[i];
    for(int i=0;i<n;i++)
    {
        if(max!=a[i])
        max2 = a[i];
    }
    for(int i=0;i<n;i++)
        if(max-a[i]<max-max2 && max-a[i]!=0)
        max2 = a[i];
    printf("\nsố lớn thứ 2 là: %d chỉ số trong mảng là: ",max2);
    for(int i =0;i<n;i++)
    if(a[i]==max2)
    printf("a[%d] ",i);
    tong=a[0]+a[1];
    for(int i=0;i<n;i++)
    for(int j=0;j<i;j++)
        if(abs(0-(a[i]+a[j]))<abs(0-tong))
        {
        gan01 = a[i];
        gan02 = a[j];
        tong = a[i]+a[j];
        t++;
        }
        if(t==0)
        {
        gan01 = a[0];
        gan02 = a[1];
        }
   printf("\n2 phần tử có tổng gần 0 nhất là: %d chỉ số trong mảng là: ",gan01);
    for(int i =0;i<n;i++)
    if(a[i]==gan01)
    printf("a[%d] ",i);
    printf(" và %d chỉ số trong mảng là: ",gan02);
    for(int i =0;i<n;i++)
    if(a[i]==gan02)
    printf("a[%d] ",i);
    return 0;
    }
    else
    printf("không hợp lệ");
}