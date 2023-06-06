#include<stdio.h>
#include<string.h>
int main ()
{
    int n,k=0,max;
    struct DOIBONG
    {
        char tendoi[100];
        int win,draw,lose,diem;
    } DB[100];
    do{
    printf("Nhap vao so doi bong: ");
    scanf("%d",&n);
    } while(n<2 || n>100);
    for(int i=0;i<n;i++)
    {
    printf("\nDoi %d:\n",i+1);
    printf("Ten doi:");
    fflush(stdin); gets(DB[i].tendoi);
    printf("Nhap so tran thang:");
    scanf("%d",&DB[i].win);
    printf("Nhap so tran hoa:");
    scanf("%d",&DB[i].draw);
    printf("Nhap so tran thua:");
    scanf("%d",&DB[i].lose);
    DB[i].diem = DB[i].win*3+DB[i].draw;
    printf("Diem: %d",DB[i].diem);
    printf("\n");
    }
    max = DB[0].diem;
    for(int i=0;i<n;i++)
    {
        if(DB[i].diem>=max)
        { max=DB[i].diem;
            k=i;
        }
    }
    printf("\nDoi bong co so diem cao nhat la: ");
    puts(DB[k].tendoi);
    return 0;
}