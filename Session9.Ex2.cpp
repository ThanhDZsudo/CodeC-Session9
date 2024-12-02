#include <stdio.h>

int main(){
    int n, pos, gia_tri;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
    	printf("Moi ban nhap vao tu thu %d : ",i+1);
    	scanf("%d", &arr[i]);
	}
    printf("Nhap vi tri sua: ");
    scanf("%d", &pos);
    printf("Nhap gia tri moi: ");
    scanf("%d", &gia_tri);
    if(pos>=0 && pos<n)
        arr[pos] = gia_tri;
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

