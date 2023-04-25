
#include <stdio.h>

int main()
{
    float x,y;
    char a;
    printf("nhap vao 2 so x,y: ");
    scanf("%f%f",&x,&y);
    
    printf("nhap vao phep toan: ");
    scanf(" %c",&a);
    switch (a)
    {
        case '+':printf("x+y = %f",x+y); break;
        case '-':printf("x-y = %f",x-y); break;
        case '*':printf("x*y = %f",x*y); break;
        case '/':
        if(y==0)
        printf("khong chia duoc");
        else
        printf("x/y = %f",x/y); break;
}
    return 0;
}
