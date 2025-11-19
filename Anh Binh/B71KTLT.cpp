#include <stdio.h>

void nhap(int a[], int n, char ten){
    printf("Nhap mang %c: ", ten);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }	
}

void xuat(int a[], int n, char ten){
    printf("Mang %c: ", ten);
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int giamdan(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        if(a[i] <= a[i + 1]){
            return 0;
        }
    }
    return 1;
}

void chenmang(int b[], int *kichthuoc, int m){
    int i = *kichthuoc - 1;
    while(i >= 0 && b[i] < m){
        b[i + 1] = b[i];
        i--;
    }
    b[i + 1] = m;
    (*kichthuoc)++;
}

void noimang(int a[], int b[], int *m, int n){
    for(int i = 0; i < n; i++) {
        chenmang(b, m, a[i]);
    }
}

int main(){
    int n, m;
    printf("Nhap kich thuoc mang A: ");
    scanf("%d", &n);
    printf("Nhap kich thuoc mang B: ");
    scanf("%d", &m);
    int a[n], b[m + n];
    nhap(a, n, 'A');
    nhap(b, m, 'B');
    printf("Truoc khi noi:\n");
    xuat(a, n, 'A');
    xuat(b, m, 'B');
    if(giamdan(b, m==1)){
        printf("Mang B la mang giam dan.\n");
    } else {
        printf("Mang B KHONG phai la mang giam dan.\n");
    }
    int m1 = m;
    noimang(a, b, &m1, n);
    printf("Sau khi noi:\n");
    xuat(b, m1, 'B');
    if(kiemtragiamdan(b, m1)){
        printf("Mang B sau khi noi la mang giam dan.\n");
    } else {
        printf("Mang B sau khi noi KHONG phai la mang giam dan.\n");
    }
    return 0;
}
