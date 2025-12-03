#include <stdio.h>
#define MAX 100

void nhap(float a[], int n, char ten){
    printf("Nhap mang %c: ", ten);
    for(int i = 0; i < n; i++){
        scanf("%f", &a[i]);
    }	
}

void xuat(float a[], int n, char ten){
    printf("Mang %c: ", ten);
    for(int i = 0; i < n; i++){
        printf("%f ", a[i]);
    }
    printf("\n");
}

void chenmang(float b[], int *kichthuoc, int m){
    int i = *kichthuoc - 1;
    while(i >= 0 && b[i] < m){
        b[i + 1] = b[i];
        i--;
    }
    b[i + 1] = m;
    (*kichthuoc)++;
}

void noimang(float a[], float b[], int *m, int n){
    for(int i = 0; i < n; i++) {
        chenmang(b, m, a[i]);
    }
}

int main(){
	float a[MAX], b[2*MAX];
    int n, m;
    printf("Nhap kich thuoc mang A: ");
    scanf("%d", &n);
    printf("Nhap kich thuoc mang B: ");
    scanf("%d", &m);
    
    nhap(a, n, 'A');
    nhap(b, m, 'B');
    
    printf("Truoc khi noi:\n");
    xuat(a, n, 'A');
    xuat(b, m, 'B');
    for(int i=0; i<m-1; i++){
    	if(b[i]<b[i+1]){
    		printf("Khong the sap xep vi mang B khong giam dan.");
    		return 1;
		}
	}
    
    int m1 = m;
    noimang(a, b, &m1, n);
    
    printf("Sau khi noi:\n");
    xuat(b, m1, 'B');
    
    return 0;
}
