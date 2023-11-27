#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {     
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n, x;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    int result = linearSearch(arr, n, x);
    (result == -1) ? printf("Phan tu khong co trong mang\n")
                   : printf("Phan tu co tai chi so %d\n", result);

    result = binarySearch(arr, 0, n-1, x);
    (result == -1) ? printf("Phan tu khong co trong mang\n")
                   : printf("Phan tu co tai chi so %d\n", result);

    return 0;
}
