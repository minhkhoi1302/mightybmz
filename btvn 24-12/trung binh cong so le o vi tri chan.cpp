#include <stdio.h>

float tinh_trung_binh_cong_so_le_o_vi_tri_chan(int ary[], int n) {
    int tong_so_le = 0, so_le = 0;

    for (int i = 0; i < n; i+=2)
        if (ary[i] % 2 != 0)
            tong_so_le += ary[i], so_le++;

    return so_le ? (float)tong_so_le / so_le : 0;
}
int main() {
    int ary;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &ary);

    int mang_so[ary];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < ary; scanf("%d", &mang_so[i++]));

    printf("Trung binh cong cua cac so le o vi tri chan trong mang la: %.2f\n",
           tinh_trung_binh_cong_so_le_o_vi_tri_chan(mang_so, ary));

    return 0;
}

