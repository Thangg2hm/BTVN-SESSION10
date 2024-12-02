#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // In m?ng sau khi s?p x?p
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int x;
    printf("Nhap vao phan tu can tim: ");
    scanf("%d", &x);

    int left = 0, right = n - 1;
    int result = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            result = mid;
            break;
        }
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", x, result);
    } else {
        printf("Phan tu %d khong ton tai trong mang\n", x);
    }

    return 0;
}

