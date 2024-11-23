#include <stdio.h>
int main() {
    int ngay, thang, nam;
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if (nam < 1) {
        printf("Ngay khong hop le");
    }
    if (thang < 1 || thang > 12) {
        printf("Ngay khong hop le");
    }
    int soNgayToiDa;
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        soNgayToiDa = 31;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        soNgayToiDa = 30;
    } else if (thang == 2) {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            soNgayToiDa = 29;
        } else {
            soNgayToiDa = 28;
        }
    }
    if (ngay < 1 || ngay > soNgayToiDa) {
        printf("Ngay khong hop le");
    } else {
        printf("Ngay hop le");
    }

    return 0;
}
