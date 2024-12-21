#include <stdio.h>
int main() {
    
    int size = 5, arrayInt[size] = {1,2,3,4,5}, n;
    printf("Nhap vi tri mang ban can chinh sua: ");
    scanf("%d", &n);
    printf("Nhap gia tri ban muon chinh sua (gia tri cu la %d): ", arrayInt[n]);
    scanf("%d", &arrayInt[n]);
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arrayInt[i]);
    }
    return 0;
}