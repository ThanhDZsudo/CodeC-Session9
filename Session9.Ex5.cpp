#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice, n, pos, value;
    int arr[100];
    int size = 0;
    
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap gia tri phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                size = n;
                break;
            case 2:
                printf("Cac phan tu dang quan ly: ");
                print_array(arr, size);
                break;
            case 3:
                {
                    int even_sum = 0;
                    printf("Cac phan tu chan: ");
                    for (int i = 0; i < size; i++) {
                        if (arr[i] % 2 == 0) {
                            printf("%d ", arr[i]);
                            even_sum += arr[i];
                        }
                    }
                    printf("\nTong cac phan tu chan: %d\n", even_sum);
                }
                break;
            case 4:
                if (size > 0) {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < size; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Gia tri lon nhat: %d\n", max);
                    printf("Gia tri nho nhat: %d\n", min);
                } else {
                    printf("Mang trong.\n");
                }
                break;
            case 5:
                {
                    int prime_sum = 0;
                    printf("Cac phan tu la so nguyen to: ");
                    for (int i = 0; i < size; i++) {
                        if (is_prime(arr[i])) {
                            printf("%d ", arr[i]);
                            prime_sum += arr[i];
                        }
                    }
                    printf("\nTong cac so nguyen to: %d\n", prime_sum);
                }
                break;
            case 6:
                {
                    int num, count = 0;
                    printf("Nhap vao mot so: ");
                    scanf("%d", &num);
                    for (int i = 0; i < size; i++) {
                        if (arr[i] == num) count++;
                    }
                    printf("Co %d phan tu bang %d trong mang.\n", count, num);
                }
                break;
            case 7:
                {
                    printf("Nhap gia tri phan tu can them: ");
                    scanf("%d", &value);
                    printf("Nhap vi tri can them (0-based index): ");
                    scanf("%d", &pos);
                    if (pos >= 0 && pos <= size && size < 100) {
                        for (int i = size; i > pos; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[pos] = value;
                        size++;
                        printf("Mang sau khi them: ");
                        print_array(arr, size);
                    } else {
                        printf("Vi tri khong hop le hoac mang da day.\n");
                    }
                }
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    } while (choice != 8);
    
    return 0;
}

