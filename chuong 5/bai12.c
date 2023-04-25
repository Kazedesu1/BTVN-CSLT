
#include <stdio.h>

int main()
{
    float luong,gio_lam;
    printf("nhap vao so luong mot gio: ");
    scanf("%f",&luong);
    printf("nhap vao so gio lam: ");
    scanf("%f",&gio_lam);
    
    if(gio_lam >= 40)
    printf("thu nhap cua ban la: %f",luong*40+(gio_lam-40)*luong*1.5);
    else
    printf("thu nhap cua ban la: %f",luong*gio_lam);
    return 0;
}
