#include<stdio.h>

int main()
{
    int t,h,m,s;
    printf("nhap vao so giay tu 0 den 86399 :");
    scanf("%d",&t);
    if(0<=t & t<= 86399)
    {
        h=(t/3600)%24;
        m=(t%3600)/60;
        s=(t%3600)%60;
    if(h<=9)
    printf("0%d:",h);
    else
    printf("%d:",h);
    if(m<=9)
    printf("0%d:",m);
    else
    printf("%d:",m);
    if(s<=9)
    printf("0%d",s);
    else
    printf("%d",s);
    }
    else
    printf("so khong hop le");

}
