
#include <stdio.h>


int main()
{
    float a,b,c;
    for(a=1;a<=20;a++)
    for(b=1;b<=33;b++)
    for(c=1;c<=100;c++)
        if(a*5+b*3+c/3==100 && a+b+c==100)
        printf("so trau dung la: %.0f\nso trau nam la: %.0f\nso trau gia la: %.0f\n\n",a,b,c);

     
    
    
}