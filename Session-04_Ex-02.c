#include<stdio.h>
int main(){
    int a;
    printf("Nhap so nguyen : ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d la so chan\n",a);
    }
    else{
        printf("%d la so le\n",a);
    }
    return 0;
    
}