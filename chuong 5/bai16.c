
#include <stdio.h>


int main()
{
    char c;
    int a=0;
    while (a==0)
    {
    printf("nhap vao 1 ky tu: ");
    scanf(" %c",&c);
    if(c == '0')
    break;
    else
    printf("ma ASCII cua ky tu tren la: %d\n",c);
    
}

    
    
}
