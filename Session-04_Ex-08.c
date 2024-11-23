#include<stdio.h>
int main(){
    float canh_a, canh_b, canh_c;
    printf("Nhap lan luot 3 canh cua tam giac :");
    scanf(" %f %f %f",&canh_a, &canh_b, &canh_c);
    if (canh_a + canh_b > canh_c && (canh_a + canh_c > canh_b) && (canh_b + canh_c > canh_a))
    {
        printf("La 3 canh cua tam giac");
    }
    else{
        printf("Khong phai 3 canh cua tam giac");
    }
    return 0;
    
}