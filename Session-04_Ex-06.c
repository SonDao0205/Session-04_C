#include<stdio.h>
int main(){
    float chi_so_cu, chi_so_moi;
    float so_dien;
    float tien_dien;
    printf("Nhap so dien cu :");
    scanf("%f",&chi_so_cu);
    printf("Nhap so dien moi :");
    scanf("%f",&chi_so_moi); 
    so_dien = chi_so_moi - chi_so_cu;  
    if (so_dien >= 0 && (so_dien < 50 ))
    {
        tien_dien = so_dien * 10000;
        printf("So tien dien tieu thu la : %.2f", tien_dien); 
    }
    else if(so_dien < 100){
        tien_dien = 50 * 10000 + (so_dien - 50) * 15000;
        printf("So tien dien tieu thu la : %.2f", tien_dien);
    }
    else if(so_dien < 150){
        tien_dien = 50 * 10000 + 50 * 15000 + (so_dien - 100) * 20000;
        printf("So tien dien tieu thu la : %.2f", tien_dien);
    }
    else if(so_dien < 200){
        tien_dien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (so_dien - 150) * 25000;
        printf("So tien dien tieu thu la : %.2f", tien_dien);
    }
    else {
        tien_dien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (so_dien - 150) * 30000;
        printf("So tien dien tieu thu la : %.2f", tien_dien);
    }
    return 0;
}
