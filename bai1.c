#include <stdio.h>
#include <string.h>
int main()
{
    char dc[100];
    int n,sdt,j=0,k=0;
    struct DANHBA
    {
        char hoten[100];
        char diachi[100];
        int sodienthoai;
    } DB[100];
    do{
    printf("Nhap vao so danh ba:");
    scanf("%d",&n);
    }while(n<2 || n>100);
    for(int i=0;i<n;i++)
    {
    printf("\nNhap vao danh ba :\n");
    printf("nhap vao ho ten:");
    fflush(stdin); gets(DB[i].hoten);
    printf("Nhap vao dia chi:");
    fflush(stdin); gets(DB[i].diachi);
    printf("Nhap vao sdt:");
    scanf("%d",&DB[i].sodienthoai);
    printf("\n");
    }
    printf("Nhap vao so dien thoai can tim:");
    scanf("%d",&sdt);
    for(int i=0;i<n;i++)
    { if(DB[i].sodienthoai == sdt)
        {
        printf("\nThong tin danh ba cua so do la:");
        printf("\nSo dien thoai: %d",DB[i].sodienthoai);
        printf("\nHo va ten:"); puts(DB[i].hoten);
        printf("Dia chi:"); puts(DB[i].diachi);
        j++;
        }
    }
    if(j==0)
    printf("**khong tim thay so dien thoai nay trong danh ba**\n");
    printf("Nhap vao dia chi can tim:");
    fflush(stdin); gets(dc);

    for(int i=0;i<n;i++)
    { if(strcmp(dc,DB[i].diachi)==0)
        {
        printf("\nThong tin danh ba cua dia chi tren la:");
        printf("\nSo dien thoai: %d",DB[i].sodienthoai);
        printf("\nHo va ten:"); puts(DB[i].hoten);
        printf("Dia chi:"); puts(DB[i].diachi);
        k++;
        }
    }
    if(k==0)
    printf("**khong tim thay dia chi nay trong danh ba**");
    return 0;
}