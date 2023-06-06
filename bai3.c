#include<stdio.h>
#include<string.h>

long TienGiang(int sotiet,float heso,long dongia);
int main ()
{
    int n;
    struct GIANGDAY
    {
        char malop[6];
        char tengv[16];
        float heso;
        long dongia,sotiengiang;
        int sotiet;
    } GD[51];
        do{
        printf("Nhap vao so mon giang day: ");
        scanf("%d",&n);
        }while(n<2||n>50);

    for(int i=0;i<n;i++)
    {
        printf("\nNhap vao thong tin mon thu %d:",i+1);
        printf("\nNhap vao Ma Lop: ");
        fflush(stdin); gets(GD[i].malop);
        printf("Nhap vao Ten Giang Vien: ");
        fflush(stdin); gets(GD[i].tengv);
        printf("Nhap vao so tiet: ");
        scanf("%d",&GD[i].sotiet);
        printf("Nhap vao he so: ");
        scanf("%f",&GD[i].heso);
        printf("Nhap vao don gia: ");
        scanf("%d",&GD[i].dongia);
        GD[i].sotiengiang = TienGiang(GD[i].sotiet,GD[i].heso,GD[i].dongia);
    }
    printf("                  DANH SACH CAC MON GIANG DAY                 \n");
    printf("|---|-----|----------------|-------|-----|--------|----------|\n|STT|MALOP| TEN GIANG VIEN |SO TIET|HE SO|DON GIA | SO TIEN  |\n|---|-----|----------------|-------|-----|--------|----------|\n");
    for(int i=0;i<n;i++)
    {
        printf("|%3d|%5s|%16s|%7d|%5.1f|%8ld|%10ld|\n",i+1,GD[i].malop,GD[i].tengv,GD[i].sotiet,GD[i].heso,GD[i].dongia,GD[i].sotiengiang);
        printf("|---|-----|----------------|-------|-----|--------|----------|\n");
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<i;j++)
    {
        if(GD[i].sotiengiang>GD[j].sotiengiang)
        {
            GD[50]=GD[i];
            GD[i] =GD[j];
            GD[j] =GD[50];
        }
    }
    printf("\n         DANH SACH CAC MON GIANG DAY SAU KHI SAP XEP        \n");
    printf("|---|-----|----------------|-------|-----|--------|----------|\n|STT|MALOP| TEN GIANG VIEN |SO TIET|HE SO|DON GIA | SO TIEN  |\n|---|-----|----------------|-------|-----|--------|----------|\n");
    for(int i=0;i<n;i++)
    {
        printf("|%3d|%5s|%16s|%7d|%5.1f|%8ld|%10ld|\n",i+1,GD[i].malop,GD[i].tengv,GD[i].sotiet,GD[i].heso,GD[i].dongia,GD[i].sotiengiang);
        printf("|---|-----|----------------|-------|-----|--------|----------|\n");
    }

    return 0;
}
long TienGiang(int sotiet,float heso,long dongia)
{
    return sotiet*heso*dongia;
}