
#include <stdio.h>

int main()
{
    float math,phy,chem;
    printf("nhap vao diem 3 mon toan ly hoa: ");
    scanf("%f%f%f",&math,&phy,&chem);
    
    if(math+phy+chem >= 15)
    printf("Đạt\n");
    else
    printf("Không Đạt\n");
    if(math>7 && phy>7 && chem >7)
    printf("Học đều các môn");
    else
    printf("Học chưa đều các môn");
    return 0;
}
