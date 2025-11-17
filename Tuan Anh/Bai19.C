#include <stdio.h>
int thuoc(float n) {
    if (n > 3 && n < 5)
        return 1;
    return 0;
}
void lietke(float x, float y, float z) {
    printf("Cac so thuoc khoang (3,5):\n");
    if (thuoc(x) == 1) printf("%.2f\n", x);
    if (thuoc(y) == 1) printf("%.2f\n", y);
    if (thuoc(z) == 1) printf("%.2f\n", z);
}
int main() {
    float x, y, z;

    printf("Nhap x, y, z: ");
    scanf("%f %f %f", &x, &y, &z);

    lietke(x, y, z);

    return 0;
}