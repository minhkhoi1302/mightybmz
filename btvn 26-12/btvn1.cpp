#include <stdio.h>
#include <stdlib.h>

int calculateDistance(int a, int b) {
    return abs(a - b);
}

int findClosestValue(int arr[], int n, int x) {
    if (n == 0) {
        printf("Mang rong. Khong tim thay gia tri.\n");
        return -1;
    }

    int closestValue = arr[0];
    int midDistance = calculateDistance(arr[0], x);

    for (int i = 1; i < n; i++) {
        int distance = calculateDistance(arr[i], x);
        if (distance < midDistance) {
            midDistance = distance;
            closestValue = arr[i];
        }
    }

    return closestValue;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu cua mang phai la so duong.\n");
        return 1; 
    }

    int arr[n];
    printf("Nhap mang so nguyen n: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    int result = findClosestValue(arr, n, x);

    
    if (result != -1) {
        printf("Gia tri trong mang gan gia tri %d nhat la: %d\n", x, result);
    }

    return 0; 
}
