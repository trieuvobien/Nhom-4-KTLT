#include <stdio.h>



int main() {
    
    int n = 10; 
    int sum = 0; 

    
    for (int i = 1; i <= n; i++) {
        sum += i; 
        
        printf("i = %d\n", i);
    }

    
    printf("Tổng từ 1 đến %d là: %d\n", n, sum);

    
    return 0;
}