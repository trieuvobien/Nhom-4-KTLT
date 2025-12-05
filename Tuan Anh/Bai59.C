#include<stdio.h>
int ucln(int a, int b) {
    while(b != 0) {
    int r = a % b;
        a = b;
        b = r;
    } return a;
}
int uclnmang(int a[100], int n) {
    int kq = a[0];
    for(int i = 1; i < n; i++) {
        kq = ucln(kq,a[i]);
    } return kq;
}
int bcnn(int a, int b) {
    return (a/ucln(a,b))*b;
}
int bcnnmang(int a[100], int n) {
    int kq = a[0];
    for (int i =1; i < n; i++) {
        kq = bcnn(kq,a[i]);
    } return kq;
}
int main () {
    int n;
    printf("Nhap so phan tu n:");
    scanf("%d", &n);
    int a[n];
    printf("Nhap phan tu trong mang:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    //cau a
    printf("a) Xuat mang:");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    //cau b
    uclnmang(a, n);
    printf("b) UCLN cua mang la: %d\n", uclnmang(a,n));
    //cau c
    bcnnmang(a, n);
    printf("c) BCNN cua mang la: %d\n", bcnnmang(a,n));
    return 0;

}
