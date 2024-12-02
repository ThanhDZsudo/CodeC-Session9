#include <stdio.h>

void nhap_mang(int arr[], int *n){
    printf("nhap so phan tu: ");
    scanf("%d", n);
    for(int i=0; i<*n; ++i){
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}
void hien_thi_mang(int arr[], int n){
    printf("mang: ");
    for(int i=0; i<n; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void them_phan_tu(int arr[], int *n){
    int gia_tri, index;
    printf("nhap gia tri can them: ");
    scanf("%d", &gia_tri);
    printf("nhap vi tri muon the: ");
    scanf("%d", &index);
    if(index>=0 && index<=*n){
        for(int i=*n; i>index; --i){
            arr[i] = arr[i-1];
        }
        arr[index]=gia_tri;
        (*n)++;
    } else{
        printf("vi tri khong hop le\n");
    }
}
void sua_phan_tu(int arr[], int n){
    int index, gia_tri;
    printf("nhap vi tri muon sua: ");
    scanf("%d", &index);
    if(index>=0 && index<n){
        printf("nhap gia tri moi: ");
        scanf("%d", &gia_tri);
        arr[index] = gia_tri;
    } else{
        printf("vi tri khong hop le\n");
    }
}
void xoa_phan_tu(int arr[], int *n){
    int index;
    printf("nhap vi tri muon xoa: ");
    scanf("%d", &index);
    if(index>=0 && index<*n){
        for(int i=index; i<*n-1; ++i){
            arr[i] = arr[i+1];
        }
        (*n)--;
    }else{
        printf("vi tri khong hop le\n");
    }
}
int main(){
    int arr[100], n=0, lua_chon;
    do{
        printf("\n menu \n");
        printf("1 nhap vao mang\n");
        printf("2 hien thi mang\n");
        printf("3 them phan tu\n");
        printf("4 sua phan tu\n");
        printf("5 xoa phan tu\n");
        printf("6 thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d", &lua_chon);
        switch(lua_chon){
            case 1:
                nhap_mang(arr, &n);
                break;
            case 2:
                hien_thi_mang(arr, n);
                break;
            case 3:
                them_phan_tu(arr, &n);
                break;
            case 4:
                sua_phan_tu(arr, n);
                break;
            case 5:
                xoa_phan_tu(arr, &n);
                break;
            case 6:
                printf("thoat chuong trinh\n");
                break;
            default:
                printf("lua chon khong hop le\n");
        }
    }while(lua_chon!=6);
    return 0;
}

