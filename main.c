
// main.c
#include <stdio.h>
#include "functions.h"

int main(void) {
    int choice = -1, numb1 , numb2;
    char name[100];//Khai báo một mảng ký tự để lưu tên 
    char str[100];//Khai báo một mảng ký tự để lưu chuỗi 

    while (choice != 0) {
        printf("\n====== MENU ======\n");
        printf("1. Profile\n");
        printf("2. Kiem Tra So Nguyen To\n");
        printf("3. In ra so Chan\n");
        printf("4. Find Min\n");
        printf("5. Dem so chu cai viet hoa trong chuoi\n");
        printf("6.Nhap 6 de thoat\n");
        printf("Lua chon cua ban [1-6]: ");
        scanf("%d", &choice);

        switch (choice) {//Sử dụng switch case để chọn chức năng
        case 1: // Profile
            Profile();
            break;

        case 2: //Kiểm tra số nguyên tố
            printf("Nhap mot so nguyen: ");
            scanf("%d", &numb1);
            kiemTraSoNguyenTo(numb1);
            break;


        case 3: //In ra số chẵn
            printf("Nhap mot so nguyen : ");
            scanf("%d", &numb1);
            inSoChan(numb1);
            break;

      
        case 4: // Find Min
            printf("Enter number 1:   ");
            scanf("%d", &numb1);
            printf("Enter number 2:   ");
            scanf("%d", &numb2 );
            printf("So nho nhat la: %d\n",FindMin(numb1,numb2));
            break;

        case 5: //Đếm số chữ cái viết hoa trong chuỗi
            printf("Nhap mot chuoi: ");
            scanf(" %[^\n]", str); // Đọc chuỗi có khoảng trắng
            demSoChuCaiHoa(str);
            break;
        
        case 6:
            printf("Thoat chuong trinh.\n");
            break;

        default:
            printf("Lua chon khong hop le! Vui long nhap lai.\n");
            break;
        }
    }
    return 0;
}

