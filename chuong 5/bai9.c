#include <stdio.h>

int main()
{
    int x,y,z;
    char a,d,c;
    
    printf("nguoi choi 1 chon: ");
    scanf(" %c",&a);
    printf("nguoi choi 2 chon: ");
    scanf(" %c",&d);
    printf("nguoi choi 3 chon: ");
    scanf(" %c",&c);

    switch (a)
    {   
        case 'B':switch (d)
                {
                    case 'B':switch (c)
                            {
                                case 'B': x=y=z=2; break;
                                case 'K': x=y=1; break;
                                case 'G': z=1; break;
                            } break;
                    case 'K':switch (c)
                            {
                                case 'B': x=z=1; break;
                                case 'K': x=1; break;
                                case 'G': x=y=z=2; break;
                            } break;
                    case 'G':switch (c)
                            {
                                case 'B': y=1; break;
                                case 'K': x=y=z=2; break;
                                case 'G': y=z=1; break;
                            } break;
                } break;
        
        case 'K':switch (d)
                {
                    case 'B':switch (c)
                            {
                                case 'B': y=z=1; break;
                                case 'K': y=1; break;
                                case 'G': x=y=z=2; break;
                            } break;
                    case 'K':switch (c)
                            {
                                case 'B': z=1; break;
                                case 'K': x=y=z=2; break;
                                case 'G': x=y=1; break;
                            } break;
                    case 'G':switch (c)
                            {
                                case 'B': x=y=z=2; break;
                                case 'K': x=z=1; break;
                                case 'G': x=1; break;
                            } break;
                } break;
        case 'G':switch (d)
                {
                    case 'B':switch (c)
                            {
                                case 'B': x=1; break;
                                case 'K': x=y=z=2; break;
                                case 'G': x=z=1; break;
                            } break;
                    case 'K':switch (c)
                            {
                                case 'B': x=y=z=2; break;
                                case 'K': y=z=1; break;
                                case 'G': y=1; break;
                            } break;
                    case 'G':switch (c)
                            {
                                case 'B': x=y=1; break;
                                case 'K': z=1; break;
                                case 'G': x=y=z=2; break;
                            } break;
                } break;
    } 
    
    printf("ket qua la:\nnguoi choi 1:");
    switch (x)
    { case 0: printf("thua\n"); break;
    case 1: printf("thang\n"); break;
    case 2: printf("hoa\n"); break;
    }
    printf("nguoi choi 2:"); 
    
    switch (y)
    { case 0: printf("thua\n"); break;
    case 1: printf("thang\n"); break;
    case 2: printf("hoa\n"); break;
    }
    printf("nguoi choi 3:");

    switch (z)
    { case 0: printf("thua\n"); break;
    case 1: printf("thang\n"); break;
    case 2: printf("hoa\n"); break;
    }
        
}
