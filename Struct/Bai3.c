#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;
    printf("Nhap so luong nhan vien: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap ten, id va luong cho nhan vien thu %d: ", i+1);
        scanf("%s %d %f", &employees[i].name, &employees[i].id, &employees[i].salary);
    }

    printf("Danh sach nhan vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Ten: %s, ID: %d, Luong: %.2f\n", employees[i].name, employees[i].id, employees[i].salary);
    }

    return 0;
}
