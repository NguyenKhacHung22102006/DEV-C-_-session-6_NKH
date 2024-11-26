#include <stdio.h>
#include <math.h>  

int main() {
    float a, b, c, denta, root1, root2;

    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Phuong trinh khong phai phuong trinh bac 2.\n");
        return 0;  
    }
    
    denta = b * b - 4 * a * c;

    if (denta > 0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Phuong trình có hai nghiem phân biet:\n");
        printf("Nghi?m 1: %.2f\n", root1);
        printf("Nghi?m 2: %.2f\n", root2);
    } else if (denta == 0){
        root1 = -b / (2 * a);
        printf("Phuong trình có nghiem kép: %.2f\n", root1);
    } else {
        printf("Phuong trình vô nghiem (không có nghiem thuc).\n");
    }

    return 0;
}
	
    
