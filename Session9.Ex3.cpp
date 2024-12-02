#include <stdio.h>

int main(){
    int arr[100], n, index;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for(int i=0; i<n; ++i){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &index);
    if(index>=0 && index<n) {
        for(int i=index; i<n-1; ++i){
            arr[i] = arr[i+1];
        }
        n--;
    } else {
        printf("Vi tri khong hop le\n");
    }
    printf("Mang sau khi xoa: ");
    for(int i=0; i<n; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

