#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <cstring>
typedef struct sinhvien
{
    /* data */
    char name[30];
    char id[10];
}sv;
char *tachchuoi(char string[20]){
    char *p = strtok(string," ");
    int i = 0;
    char result[5];
    while (p != '\0'){
        strcpy(result[i],p);
        i++;
        p = strtok('\0'," ");
    }
    return result[i-1];
}
void Inthongtin(sv dssv[],int total){
    
    for(int i=1;i<= total;i++){
        printf("%-10s %-20s ",dssv[i].name,dssv[i].id);
        printf("\n");
    }
}
 sv Nhapthongtin(){
    sv hocsinh;
    puts("\nnhap ten sinh vien : ");
    fflush(stdin);
    gets(hocsinh.name);
    puts("\nma so sinh vien: ");
    gets(hocsinh.id);
    return hocsinh;
}
int main(){
    int luachon;
    sv dssv[1000];
    int total = 0;
    do
    {
        puts("\n================MENU=============\n");
        puts("0.Exit\n");
        puts("1.Nhap thong tin sinh vien\n");
        puts("2.In ra danh sach sinh vien\n");
        puts("3.tim sinh vien theo ten\n");
        puts("Chon di\n");
        scanf("%d",&luachon);

        switch (luachon)
        {
        case 0:
            break;
        case 1:
            dssv[++total] = Nhapthongtin();
            break;
        case 2:
            Inthongtin(dssv,total);
            break;
        default:
            puts("\n1 chon lai 2 an dam ");
            break;
        }
    } while (luachon);

    return 0;
}