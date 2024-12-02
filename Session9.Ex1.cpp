#include <stdio.h>

int main(){
    int arr[100], n, gia_tri, vi_tri;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
		printf("Moi ban nhap vao tu thu %d : ",i+1);
		scanf("%d", &arr[i]);
    }
	printf("Nhap gia tri thay: ");
    scanf("%d", &gia_tri);
    printf("Nhap vi tri muon thay: ");
    scanf("%d", &vi_tri);
    if(vi_tri>=0 && vi_tri<=n){
        for(int i=n; i>vi_tri; i--) arr[i] = arr[i-1];
        arr[vi_tri] = gia_tri;
		n++;
        for(int i=0; i<n; i++)
		printf("%d", arr[i]);
        printf("\n");
    } else{
        printf("Vi tri khong hop le\n");
    }
    return 0;
}

