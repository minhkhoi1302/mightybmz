#include <stdio.h>

int timKiem(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1; 
}


int main() {
    int n, x;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &x);

    int ketQua = timKiem(arr, n, x);

    if (ketQua != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d trong mang.\n", x, ketQua + 1);
    } else {
        printf("Gia tri %d khong tim thay trong mang.\n", x);
    }

    return 0;
}

