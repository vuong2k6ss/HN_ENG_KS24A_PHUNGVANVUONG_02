#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choose;
    int n;
    int arr[n];
    do {
        printf("MENU\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Dem so luong cac phan tu chan va le trong mang\n");
        printf("4. Gia tri lon thu hai trong mang\n");
        printf("5. Them mot phan tu vao dau mang\n");
        printf("6. Xoa phan tu tai vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu giam dan (Insertion sort)\n");
        printf("8. Nguoi dung nhap phan tu va tim kiem (Binary search)\n");
        printf("9. In ra toan bo so nguyen to trong mang da duoc binh phuong\n");
        printf("10. Sap xep mang theo thu tu giam dan\n");
        printf("11. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choose);

        switch(choose) {
            case 1: 
                printf("Nhap vao so luong phan tu cho mang: ");
                scanf("%d", &n); 
                for (int i = 0; i < n; i++) {
                    printf("Gia tri thu %d cua mang la: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2: 
                printf("Cac gia tri cua mang la: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3: 
                {
                    int chan = 0, le = 0;
                    for (int i = 0; i < n; i++) {
                        if (arr[i] % 2 == 0) {
                            chan++;
                        } else {
                            le++;
                        }
                    }
                    printf("So luong so chan la: %d\n", chan);
                    printf("So luong so le la: %d\n", le);
                }
                break;

            case 4: 
                {
                    if (n < 2) {
                        printf("Mang qua nho de tim gia tri lon thu hai.\n");
                    } else {
                        int max1 = arr[0], max2 = arr[1];
                        if (max1 < max2) {
                            max1 = arr[1];
                            max2 = arr[0];
                        }
                        for (int i = 2; i < n; i++) {
                            if (arr[i] > max1) {
                                max2 = max1;
                                max1 = arr[i];
                            } else if (arr[i] > max2) {
                                max2 = arr[i];
                            }
                        }
                        printf("Gia tri lon thu hai trong mang la: %d\n", max2);
                    }
                }
                break;

            case 5:
               
                break;

            case 6: 
              
                break;

            case 7: 
                {
                    for (int i = 1; i < n; i++) {
                        int key = arr[i];
                        int j = i - 1;
                        while (j >= 0 && arr[j] < key) {
                            arr[j + 1] = arr[j];
                            j--;
                        }
                        arr[j + 1] = key;
                    }
                    printf("Mang da duoc sap xep giam dan.\n");
                }
                break;

            case 8: 
                {
                    int a;
                    printf("Nhap vao mot so bat ki: ");
                    scanf("%d", &a);
                    int start = 0, end = n - 1;
                    int found = 0;
                    while (start <= end) {
                        int mid = (start + end) / 2;
                        if (arr[mid] == a) {
                            printf("Phan tu %d tim thay tai vi tri %d\n", a, mid);
                            found = 1;
                            break;
                        } else if (arr[mid] < a) {
                            start = mid + 1;
                        } else {
                            end = mid - 1;
                        }
                    }
                    if (!found) {
                        printf("Phan tu %d khong tim thay.\n", a);
                    }
                }
                break;

            case 9: 
           		
                break;

            case 10: 
                {
                    for (int i = 0; i < n - 1; i++) {
                        for (int j = i + 1; j < n; j++) {
                            if (arr[i] < arr[j]) {
                                int temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                            }
                        }
                    }
                    printf("Mang da duoc sap xep giam dan.\n");
                }
                break;

            case 11: 
                free(arr);
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choose != 11);

    return 0;
}

