#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float score;
};

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap ten, id va diem cho sinh vien thu %d: ", i+1);
        scanf("%s %d %f", students[i].name, &students[i].id, &students[i].score);
    }

    char target_student[50];
    printf("Nhap ten sinh vien can tim: ");
    scanf("%s", target_student);

    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, target_student) == 0) {
            printf("Sinh vien %s co id la %d va diem la %.2f\n", students[i].name, students[i].id, students[i].score);
            return 0;
        }
    }

    printf("Khong tim thay sinh vien %s\n", target_student);
    return 0;
}
