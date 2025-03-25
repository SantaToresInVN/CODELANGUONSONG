
// functions.c
#include <stdio.h>
#include <string.h>
#include "functions.h"

// Định nghĩa các hàm
//1. Hàm Profile
void Profile () {
    printf("My name is : Mr.Nobody\n");
    printf("My student code is : 123456\n");
    printf("My class is : ABCDEF\n");
    printf("My school is : CMC college\n");
}

//2. Hàm kiểm tra số nguyên tố
void kiemTraSoNguyenTo(int n) {
    if (n < 2) {
        printf("%d khong phai la so nguyen to.\n", n);
        return;
    }

    for (int i = 2; i * i <= n; i++) { 
//Bắt đầu kiểm tra từ số 2 (số nguyên tố nhỏ nhất).
// Chỉ kiểm tra các số i sao cho i * i <= n (tức là i nhỏ hơn hoặc bằng căn bậc hai của n).
//Nếu n có một ước số lớn hơn căn bậc hai của nó, thì nó cũng sẽ có một ước số nhỏ hơn căn bậc hai.
        if (n % i == 0) {
//Nếu n % i == 0, điều đó có nghĩa là n chia hết cho i, tức là i là một ước số của n.
//Nếu tìm thấy một ước số i (khác 1 và n), thì n không phải là số nguyên tố.

            printf("%d khong phai la so nguyen to.\n", n);
            return;
        }
    }

    printf("%d la so nguyen to.\n", n);
}


//3. Hàm in ra số chẵn
void inSoChan(int n) {
    printf("Day so chan tu 1 den %d la: ", n);
    for (int i = 2; i <= n; i += 2) {
    //Điều kiện vòng lặp: Vòng lặp sẽ tiếp tục chạy miễn là i nhỏ hơn hoặc bằng n.
    //Khi i > n, vòng lặp sẽ dừng.
    //Sau mỗi lần lặp, giá trị của i được tăng thêm 2.
    // Đảm bảo rằng chỉ các số chẵn (2, 4, 6, ...) được duyệt qua
        printf("%d ", i);
    }
    printf("\n");



}
//4. Hàm tìm số nhỏ nhất
int FindMin(int a, int b) {
    return (a < b) ? a : b;
}



//5. Hàm đếm số chữ cái viết hoa trong chuỗi
void demSoChuCaiHoa(char str[]) {
    int count = 0;//Biến count dùng để đếm số lượng chữ cái viết hoa trong chuỗi.
    for (int i = 0; str[i] != '\0'; i++) { 
    //Vòng lặp duyệt qua từng ký tự trong chuỗi str.
    //Điều kiện str[i] != '\0' đảm bảo rằng vòng lặp dừng khi gặp ký tự kết thúc chuỗi ('\0').
        if (str[i] >= 'A' && str[i] <= 'Z') { 
    //Kiểm tra xem ký tự tại vị trí i có phải là chữ cái viết hoa hay không.
    //Nếu đúng, tăng giá trị của count lên 1.
            count++;
        }
    }
    printf("So chu cai viet hoa trong chuoi: %d\n", count);
}
