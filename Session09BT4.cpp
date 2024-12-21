#include <stdio.h> 
int main() {
    int choose, n, arrayInt[100] = {0}, currentSize = 0, newValue;
    while (true) {
        printf("\n%12s", "MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");

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
            printf("Nhap vi tri ban muon them: ");
            scanf("%d", &n);
            printf("Nhap gia tri ban can them: ");
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
            printf("Them thanh cong!");
            break;
        case 4:
            printf("Nhap vi tri ban muon sua: ");
            scanf("%d", &n);
            printf("Nhap gia tri ban muon sua (gia tri cu la: %d): ", arrayInt[n]);
            scanf("%d", &newValue);

            arrayInt[n] = newValue;
            printf("Sua thanh cong!");
            break;
        case 5:
            printf("Nhap vi tri ban muon xoa: ");
            scanf("%d", &n);
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
                for (int i = n; i < currentSize-1; i++) {
                    arrayInt[i] = arrayInt[i+1];
                }
            }
            currentSize--;
            printf("Xoa thanh cong!");
            break;
        case 6:
            break;
        default:
            printf("So ban chon ko hop le!");
            break;
        }
        if (choose == 6) {
            return 0;
        }
    }
    return 0;
}