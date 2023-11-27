#include <stdio.h>
#include <string.h>

struct Student {
    char HoTen[50];
    int age;
    int id;
    float grade;
};

void Nhap(struct Student sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap sinh vien %d\n \n", i+1);
       
        printf("Nhap Ho ten sinh vien: \n");
        getchar();
        fgets(sv[i].HoTen, sizeof(sv[i].HoTen), stdin); 
        sv[i].HoTen[strcspn(sv[i].HoTen, "\n")] = 0; 

        printf("Nhap Lop cua sinh vien: \n");
        scanf("%d", &sv[i].age);

        printf("Nhap Ma sinh vien: \n"); 
        scanf("%d", &sv[i].id);

        printf("Nhap Diem cua sinh vien: \n");
        scanf("%f", &sv[i].grade);
         
    } 
}

void Xuat(struct Student sv[], int n)
{
    printf("%-50s %-10s %-10s %-10s \n", "Ho Ten", "Tuoi", "ID", "Diem");
    for (int i = 0; i < n; i++)
    {
        printf("%-50s %-10d %-10d %-10.1f \n", sv[i].HoTen, sv[i].age, sv[i].id, sv[i].grade);
    }
}

int main() {
    
    struct Student sv[100];
    int n;
    do
    {
        printf("Nhap so sinh vien: ");
        scanf("%d", &n);
        
        if (n<1 || n>100)
        {
            printf("Sai so, xin vui long nhap lai \n");
        }
    } while (n<1 || n>100);
    
    Nhap(sv, n);
    printf("\nDanh sach sinh vien la: \n");
    Xuat(sv, n);
    
    return 0;
}

