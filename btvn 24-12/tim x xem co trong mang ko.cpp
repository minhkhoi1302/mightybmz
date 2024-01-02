#include <stdio.h>

int kiem_tra_ton_tai(int ary[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (ary[i] == x)
            return 1; 

    return 0; 
}

int main() {
    int kich_thuoc_mang, x;

    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &kich_thuoc_mang);

    int mang_so[kich_thuoc_mang];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < kich_thuoc_mang; scanf("%d", &mang_so[i++]));

    printf("Nhap so can tim (x): ");
    scanf("%d", &x);

    if (kiem_tra_ton_tai(mang_so, kich_thuoc_mang, x))
        printf("%d ton tai trong mang.\n", x);
    else
        printf("%d khong ton tai trong mang.\n", x);

    return 0;
}

