#include <stdio.h>
int main(){
int kich_thuoc_mang;
printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &kich_thuoc_mang);
int ary[kich_thuoc_mang];
printf("Nhap cac phan tu cua mang:\n");
for (int i = 0; i < kich_thuoc_mang; i++)
        scanf("%d", &ary[i]);
int min=-1;
       for (int i = 0; i < kich_thuoc_mang; i++) {
        if (ary[i] > 0 && (min == -1 || ary[i] < min)) {
            min = ary[i];
        }
    }

    if (min != -1) {
        printf("So duong nho nhat trong mang la: %d\n", min);
    } else {
        printf("Khong co so duong trong mang.\n");
    }
}	
