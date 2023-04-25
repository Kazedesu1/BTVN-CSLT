
#include <stdio.h>

int main()
{   
    int i,s;
    for(i=1;i<=10000;i++)
     {   s+=i;
        if(s>=10000)
        break;
     }
     printf("so n can tim la: %d",i);
    return 0;
}
