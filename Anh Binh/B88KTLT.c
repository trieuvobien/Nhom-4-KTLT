#include <stdio.h>
#include <math.h>

typedef struct {
    int tu;
    int mau;
} pso;

int ucln(int a, int b){
    int tmp;
    a = abs(a);
    b = abs(b);
    while (b != 0){
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int bcnn(int a, int b){
    return abs(a * b) / ucln(a, b);
}

void rutgon(pso ps, pso *psrg){
    int UCLN = ucln(ps.tu, ps.mau);
    psrg->tu = ps.tu / UCLN;
    psrg->mau = ps.mau / UCLN;
    if (psrg->mau < 0){
        psrg->tu = -psrg->tu;
        psrg->mau = -psrg->mau;
    }
}

void nhapps(pso *ps){
    printf("Nhap tu so: ");
    scanf("%d", &ps->tu);
    
    int i;
    do {
        i = 0;
        printf("Nhap mau so: ");
        scanf("%d", &ps->mau);
        
        if (ps->mau == 0){
            printf("Mau so phai khac 0. Nhap lai mau so.\n");
            i = 1;
        }
    } while (i == 1);
}

void xuatps(pso ps){
    if (ps.mau == 1){
        printf("%d\n", ps.tu);
    } else {
        printf("%d/%d\n", ps.tu, ps.mau);
    }
}

void xuathso(pso ps){
    pso honso;
    rutgon(ps, &honso);
    if (abs(honso.tu) < abs(honso.mau)){
        printf("%d/%d", honso.tu, honso.mau);
    } else {
        int z = honso.tu / honso.mau;
        int tu = abs(honso.tu) % abs(honso.mau);
        if (tu == 0){
            printf("%d", z);
        } else {
            printf("%d+%d/%d", z, tu, honso.mau);
        }
    }
}

int main(){
    int nhanh;
    printf("Nhap (1) de xu ly 1 phan so.\n");
    printf("Nhap (2) de xu ly 2 phan so.\n");
    scanf("%d", &nhanh);
    if ((nhanh != 1) && (nhanh != 2)){
        do{
            printf("Nhap lai.\n");
            scanf("%d", &nhanh);
        } while ((nhanh != 1) && (nhanh != 2));
    }
    
    switch (nhanh){
        case 1:
            printf("Xu ly 1 phan so.\n");
            pso ps;
            nhapps(&ps);
            
            printf("Phan so dao nguoc: ");
            pso psdao;
            psdao.tu = ps.mau;
            psdao.mau = ps.tu;
            xuatps(psdao);
            
            printf("Phan so rut gon: ");
            pso psrg;
            rutgon(ps, &psrg);
            xuatps(psrg);
            
            printf("Dang hop phan: ");
            xuathso(ps);
            break;
            
        case 2:
            printf("Xu ly hai phan so.\n");
            pso ps1, ps2;
            printf("Nhap phan so thu nhat.\n");
            nhapps(&ps1);
            printf("Nhap phan so thu hai.\n");
            nhapps(&ps2);
            
            printf("Boi chung nho nhat cua hai mau so la: %d\n", bcnn(ps1.mau, ps2.mau));
            
            printf("Tong hai phan so la: ");
            pso tong, tongrg;
            int mauchung = bcnn(ps1.mau, ps2.mau);
            tong.tu = ps1.tu * (mauchung / ps1.mau) + ps2.tu * (mauchung / ps2.mau);
            tong.mau = mauchung;
            rutgon(tong, &tongrg);
            xuatps(tongrg);
            
            int tu1 = ps1.tu * (mauchung / ps1.mau);
            int tu2 = ps2.tu * (mauchung / ps2.mau);
            printf("Phan so thu nhat ");
            if(tu1 < tu2){
                printf("nho hon");
            } else if(tu1 == tu2){
                printf("bang");
            } else {
                printf("lon hon");
            }
            printf(" phan so thu hai.");
            break;
    }
    return 0;
}
