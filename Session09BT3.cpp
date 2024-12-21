#include <stdio.h>
int main() {
    int arrayInt[100] = {0}, n, currentSize;
    printf("Nhap so phan tu ban muon them vao mang: ");
    scanf("%d", &currentSize);
    for (int i = 0; i < currentSize; i++) {
        printf("arrayInt[%d] = ", i);
        scanf("%d", &arrayInt[i]);
    }

    printf("Nhap vi tri ban muon xoa: ");
    scanf("%d", &n);
    if (n < 0 || n > 100) {
        printf("Vi tri nhap khong hop le");
        return 0;
    }
    for (int i = n; i < currentSize-1; i++) {
        arrayInt[i] = arrayInt[i+1];
    }
    currentSize--;
    
    for (int i = 0; i < currentSize; i ++) {
        printf("%d ", arrayInt[i]);
    }
    return 0;
}