#include <stdio.h>
int main() {
    int choose, n, total, min, max, currentSize = 0, arrayInt[100] = {0}, check, newValue;
    while(true) {
        printf("\n%25s", "Menu\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            printf("Nhap so luong phan tu ban muon nhap vao mang: ");
            scanf("%d", &n);
            if (n < 0 || n > 100) {
                printf("So luong phan tu khong hop le");
                break;
            }
            currentSize = n;
            for (int i = 0; i < n; i++) {
                printf("arrayInt[%d] = ", i);
                scanf("%d", &arrayInt[i]);
            }
            break;
        case 2:
            if (currentSize == 0) {
                printf("Mang cua ban khong co phan tu nao");
                break;
            }
            for (int i = 0; i < currentSize; i++) {
                printf("%d ", arrayInt[i]);
            }
            break;
        case 3:
            if (currentSize == 0) {
                printf("Ban chua nhap phan tu vao mang");
                break;
            }
            total = 0;
            for (int i = 0; i < currentSize; i++) {
                if (arrayInt[i] % 2 == 0) {
                    total += arrayInt[i];
                    printf("%d ", arrayInt[i]);
                }
            }
            printf("\nTong: %d", total);
            break;
        case 4:
            if (currentSize == 0) {
                printf("Ban chua nhap phan tu vao mang");
                break;
            }
            min = max = arrayInt[0];
            for (int i = 0; i < currentSize; i++) {
                if (arrayInt[i] < min) {
                    min = arrayInt[i];
                }
                if (arrayInt[i] > max) {
                    max = arrayInt[i];
                }
            }
            printf("Gia tri lon nhat: %d\n", max);
            printf("Gia tri nho nhat: %d", min);
            break;
        case 5:
            if (currentSize == 0) {
                printf("Ban chua nhap phan tu vao mang");
                break;
            }
            total = 0;
            for (int i = 0; i < currentSize; i++) {
                check = (arrayInt[i] < 2)? 0 : 1;
                for (int j = 2; j*j <= arrayInt[i]; j++) {
                    if (arrayInt[i] % j == 0) {
                        check = 0;
                        break;
                    }
                }
                if (check) {
                    printf("%d ", arrayInt[i]);
                    total += arrayInt[i];
                }
            }
            printf("\nTong: %d", total);
            break;
        case 6: 
            if (currentSize == 0) {
                printf("Ban chua nhap phan tu vao mang");
                break;
            }
            printf("Nhap phan tu ban muon thong ke: ");
            scanf("%d", &n);
            total = 0;
            for (int i = 0; i < currentSize; i++) {
                if (arrayInt[i] == n) {
                    total++;
                }
            }
            printf("Trong mang co %d phan tu %d", total, n);
            break;
        case 7:
            printf("Nhap vi tri ban muon them phan tu: ");
            scanf("%d", &n);
            printf("Nhap gia tri ban muon them: ");
            scanf("%d", &newValue);
            if (n < 0) {
                n = 0;
            }else if (n > currentSize) {
                if (n > 100) {
                    currentSize = n = 100;
                }else {
                    currentSize = n;
                }
            }
            if (n < currentSize) {
                for (int i = currentSize; i > n; i--) {
                    arrayInt[i] = arrayInt[i-1];
                }
            }
            currentSize++;
            arrayInt[n] = newValue;
            printf("Them thanh cong");
            break;
        case 8: 
            break;
        default:
            printf("So ban nhap vao khong hop le");
            break;
        }
        if (choose == 8) {
            return 0;
        }
    }
    return 0;
}