
#include <stdio.h>

int main()
{   
    int i;
    printf("Nhap vao so thang : ");
    scanf("%d",&i);
    while(i>=1 && i<= 12)
    {
    if(i<=3) printf("quy 1");
    if(i>=4 && i<=6) printf("quy 2");
    if(i>=7 && i<=9) printf("quy 3");
    if(i>=10 && i<=12) printf("quy 4");
    break;
}
    return 0;
}
