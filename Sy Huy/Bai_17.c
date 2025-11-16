#include <stdio.h>
#include <math.h>

double Max_2_so (double a, double b) {
    double max = a;
    if (b > max) { max = b;}
    return max;
}

double Min_2_so (double a, double b) {
    double min = a;
    if (b < min) { min = b;}
    return min;
}

double Max_3_so (double a, double b, double c) {
    double max = a;
    if (b > max) { max = b;}
    if (c > max) { max = c;}
    return max;
}


double Min_3_so (double a, double b, double c) {
    double min = a;
    if (b < min) { min = b;}
    if (c < min) { min = c;}
    return min;
}

int main() {
    double a, b, c;
    printf("Nhap x, y va z: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    //cau a:
    printf(" \ncau a:");
    printf(" \nMin(x,y,z) = %lf", Min_3_so(a, b, c));
    printf(" \nMax(x,y,z) = %lf", Max_3_so(a, b, c));
    //cau b:
    printf(" \ncau b:");
    printf(" \nMin(x + y + z , xyz) = %lf", Min_2_so(a + b + c, a * b * c));
    //cau c:
    printf(" \ncau c:");
    printf(" \nMin^2((x + y + z)/2 , xyz) = %lf", Min_2_so((a + b + c)/2, a * b * c) * Min_2_so((a + b + c)/2, a * b * c));
}
