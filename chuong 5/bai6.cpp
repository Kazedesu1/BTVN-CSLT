#include <stdio.h>


int main()
{   
    int a,b,c,i;
    for(a=0;a<=20;a++)
    for(b=0;b<=10;b++)
    for(c=0;c<=4;c++)
    {if (10*a+20*b+50*c==200)
       { i++;
    printf("phuong an %d: %d to 10000 %d to 20000 %d to 50000\n",i,a,b,c);
       }
    }
     
    return 0;
}