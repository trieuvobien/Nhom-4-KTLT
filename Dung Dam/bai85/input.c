#include <stdio.h>

/* 
 * Chương trình này minh họa cách sử dụng nhiều comment.
 * Mục tiêu: Tính tổng các số từ 1 đến n.
 * Có cả chú thích nhiều dòng và chú thích một dòng.
 */

int main() {
    // Khai báo biến
    int n = 10; // n là số giới hạn
    int sum = 0; // sum dùng để lưu tổng

    /* 
     * Vòng lặp for để tính tổng
     * Chạy từ i = 1 đến i = n
     */
    for (int i = 1; i <= n; i++) {
        sum += i; // Cộng i vào sum
        // In giá trị i (chỉ để kiểm tra)
        printf("i = %d\n", i);
    }

    // In kết quả cuối cùng
    printf("Tổng từ 1 đến %d là: %d\n", n, sum);

    /* 
     * Kết thúc chương trình
     * return 0 để báo thành công
     */
    return 0;
}