#include<stdio.h>
#include <stdlib.h>

#define MAX 100

int arr[MAX];  
int n = 0;      
void nhapMang() {
    printf("Nhap so phan tu (<= %d): ", MAX);
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void inMang() {
    printf("Cac phan tu trong mang: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void themPhanTu() {
    if(n >= MAX) {
        printf("Mang da day!\n");
        return;
    }
    int pos, value;
    printf("Nhap vi tri can them (0-%d): ", n);
    scanf("%d", &pos);
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    
    for(int i = n; i > pos; i--) 
        arr[i] = arr[i-1];
    arr[pos] = value;
    n++;
}
void suaPhanTu() {
    int pos, value;
    printf("Nhap vi tri can sua (0-%d): ", n-1);
    scanf("%d", &pos);
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    arr[pos] = value;
}
void xoaPhanTu() {
    int pos;
    printf("Nhap vi tri can xoa (0-%d): ", n-1);
    scanf("%d", &pos);
    for(int i = pos; i < n-1; i++)
        arr[i] = arr[i+1];
    n--;
}
void sapXep() {
    char choice;
    printf("Chon kieu sap xep (a. Giam dan, b. Tang dan): ");
    getchar();
    scanf("%c", &choice);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if((choice == 'a' && arr[i] < arr[j]) || 
               (choice == 'b' && arr[i] > arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    inMang();
}
void timKiem() {
    int value;
    char choice;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);

    printf("Chon kieu tim kiem (a. Tuyen tinh, b. Nhi phan): ");
    getchar();
    scanf("%c", &choice);

    if(choice == 'a') { 
        for(int i = 0; i < n; i++) {
            if(arr[i] == value) {
                printf("Tim thay tai vi tri %d\n", i);
                return;
            }
        }
        printf("Khong tim thay\n");
    } else { 
        for(int i = 0; i < n-1; i++)
            for(int j = i+1; j < n; j++)
                if(arr[i] > arr[j]) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; }

        int left = 0, right = n-1;
        while(left <= right) {
            int mid = (left + right)/2;
            if(arr[mid] == value) {
                printf("Tim thay tai vi tri %d\n", mid);
                return;
            } else if(arr[mid] < value)
                left = mid + 1;
            else
                right = mid - 1;
        }
        printf("Khong tim thay\n");
    }
}

int main() {
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap mang\n");
        printf("2. In mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Sap xep\n");
        printf("7. Tim kiem\n");
        printf("8. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: nhapMang(); 
				break;
            case 2: inMang(); 
				break;
            case 3: themPhanTu(); 
				break;
            case 4: suaPhanTu(); 
				break;
            case 5: xoaPhanTu(); 
				break;
            case 6: sapXep(); 
				break;
            case 7: timKiem(); 
				break;
            case 8: printf("Thoat chuong trinh\n"); 
				exit(0);
				break;
            default: printf("Lua chon khong hop le\n");
        }
    } while(choice != 8);
    return 0;
}


