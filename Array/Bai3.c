#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    float diem[n];

    for(int i = 0; i < n; i++) {
        printf("Nhap diem cho sinh vien thu %d: ", i+1);
        scanf("%f", &diem[i]);
        sum += diem[i];
    }

    printf("Diem trung binh cua lop la: %.2f\n", sum/n);

    return 0;
}