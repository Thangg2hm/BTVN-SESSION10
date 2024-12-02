#include <stdio.h>

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int doDaiMang = sizeof(mang) / sizeof(mang[0]);
    int phanTu, viTri = -1;

    printf("Nhap vao phan tu can tim: ");
    scanf("%d", &phanTu);

    for (int i = 0; i < doDaiMang; i++) {
        if (mang[i] == phanTu) {
            viTri = i;
            break;
        }
    }

    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", phanTu, viTri);
    } else {
        printf("Phan tu %d khong ton tai trong mang\n", phanTu);
    }

    return 0;
}

