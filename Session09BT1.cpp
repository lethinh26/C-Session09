#include <stdio.h>
int main() {
    int arrayInt[100] = {0}, n, currentSize, newValue;
    printf("Nhap so phan tu ban muon them vao mang: ");
    scanf("%d", &currentSize);
    for (int i = 0; i < currentSize; i++) {
        printf("arrayInt[%d]: ", i);
        scanf("%d", &arrayInt[i]);
    }
    printf("Nhap vi tri muon them vao mang: ");
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
    printf("Nhap gia tri muon them vao vi tri %d: ", n);
    scanf("%d", &newValue);
    if (n < currentSize) {
        for (int i = currentSize; i > n; i--) {
            arrayInt[i] = arrayInt[i-1];
        }
    }
    currentSize++;
    arrayInt[n] = newValue;
    printf("\n");
    for (int i = 0; i < currentSize; i++) {
        printf("%d ", arrayInt[i]);
    }
    return 0;
}