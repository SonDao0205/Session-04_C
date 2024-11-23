#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Nhap lan luot 3 so nguyen :");
    scanf("%d %d %d",&num1, &num2, &num3);
    if ((num3 < num1 && num3 > num2) || (num3 > num1 && num3 < num2) )
    {
        printf("%d nam trong khoang giua so %d va %d", num3, num2, num1);
    }
    else{
        printf("%d khong nam trong khoang giua so %d va %d", num3, num2, num1);
    }
    return 0;
    
}