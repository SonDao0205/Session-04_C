#include<stdio.h>
#include<math.h>
int main(){
    int year;
    printf("Nhap nam phu hop :");
    scanf("%d",&year);
    if (year % 4 == 0 && (year % 100 != 0))
    {
        printf("Day la nam nhuan");
    }
    else if (year % 400 == 0 && (year % 100 == 0))
    {
        printf("Day la nam nhuan");
    }
    else{
        printf("Day khong phai la nam nhuan");
    }
    return 0;
}