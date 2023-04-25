#include <stdio.h>


int main()
{
    int a,b,c,ngayt2;
    printf("nhap vao ngay thang nam: ");
    scanf("%d %d %d",&a,&b,&c);
    if (c%4==0)
        {ngayt2=29; }
        else
        {ngayt2=28; }
    switch(b)
    {
        
    case 1: a=a; break;
    case 2: a=31+a; break;
    case 3: a=31+ ngayt2 + a; break;
    case 4: a=31*2+ ngayt2 + a; break;
    case 5: a=31*2+ 30 + ngayt2 + a; break;
    case 6: a=31*3+ 30 + ngayt2 + a; break;
    case 7: a=31*3+ 30*2 + ngayt2 + a; break;
    case 8: a=31*4+ 30*2 + ngayt2 + a; break;
    case 9: a=31*5+ 30*2 + ngayt2 + a; break;
    case 10: a=31*5+ 30*3 + ngayt2 + a; break;
    case 11: a=31*6+ 30*3 + ngayt2 + a; break;
    case 12: a=31*6+ 30*4 + ngayt2 + a; break;


    }
    printf("so ngay trong nam la: %d",a);
    
    
}