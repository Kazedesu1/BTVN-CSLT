
#include <stdio.h>

int main()
{
    float kz;
    printf("nhap vao so luong dien tieu thu: ");
    scanf("%f",&kz);
    
    
    if(kz <= 50)
    printf("tien dien cua ban la: %f",kz*1500);
    if(kz >= 50 && kz <= 100)
    printf("tien dien cua ban la: %f",50*1500+(kz-50)*2300);
    else
    printf("tien dien cua ban la: %f",50*1500 + 50*2300+ (kz-100)*3500);
    return 0;
}
