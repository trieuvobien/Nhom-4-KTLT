#include <stdio.h>
#include <math.h>

int ucln(int a, int b){
	int tmp;
	a=abs(a);
	b=abs(b);
	while (b!=0){
		tmp=b;
		b=a%b;
		a=tmp;
	}
	return a;
}

int bcnn(int a, int b){
	return abs(a*b)/ucln(a,b);
}

void rutgon(int ps[], int psrg[]){
	int UCLN=ucln(ps[0], ps[1]);
	psrg[0]=ps[0]/UCLN;
	psrg[1]=ps[1]/UCLN;
	if (psrg[1]<0){
		psrg[0]= -psrg[0];
		psrg[1]= -psrg[1];
	}
}

void nhapps(int ps[]){
    printf("Nhap tu so: ");
    scanf("%d", &ps[0]);
    
    int i;
    do {
        i = 0;
        printf("Nhap mau so: ");
        scanf("%d", &ps[1]);
        
        if (ps[1] == 0){
            printf("Mau so phai khac 0. Nhap lai.\n");
            i = 1;
        }
    } while (i==1);
}

void xuatps(int ps[]){
	if (ps[1]==1){
		printf("%d\n", ps[0]);
	}else {
	printf("%d/%d\n", ps[0], ps[1]);
	}
}

void xuathso(int ps[]){
	int honso[2];
	rutgon (ps, honso);
	if (abs(honso[0])<abs(honso[1])){
		printf("%d/%d", honso[0], honso[1]);
	} else {
		int z=honso[0]/honso[1];
		int tu=abs(honso[0])%abs(honso[1]);
		if (tu==0){
			printf("%d", z);
		} else {
			printf("%d+%d/%d", z, tu, honso[1]);
		}
	}
}

int main(){
	int nhanh;
	printf ("Nhap (1) de xu ly 1 phan so.\n");
	printf ("Nhap (2) de xu ly 1 phan so.\n");
	scanf("%d", &nhanh);
	if ((nhanh!=1)&&(nhanh!=2)){
		do{
			printf("Nhap lai.\n");
			scanf("%d", &nhanh);
		} while ((nhanh != 1) && (nhanh != 2));
	}
	switch (nhanh){
		case 1:
			printf("Xu ly 1 phan so.\n");
			int ps[2];
			nhapps(ps);
			
			printf("Phan so dao nguoc: ");
			int psdao[2];
			psdao[0]=ps[1];
			psdao[1]=ps[0];
			xuatps(psdao);
			
			printf("Phan so rut gon: ");
			int psrg[2];
			rutgon(ps, psrg);
			xuatps(psrg);
			
			printf("Dang hop phan: ");
			xuathso(ps);
			break;
			
			
		case 2:
			printf("Xu ly hai phan so.\n");
			int ps1[2], ps2[2];
			printf("Nhap phan so thu nhat.\n");
			nhapps(ps1);
			printf("Nhap phan so thu hai.\n");
			nhapps(ps2);
			
			printf("Boi chung nho nhat cua hai mau so la: %d\n", bcnn(ps1[1], ps2[1]));
			
			printf("Tong hai phan so la: ");
			int tong[2], mauchung=bcnn(ps1[1], ps2[1]);
			tong[0]=ps1[0]*(mauchung/ps1[1])+ps2[0]*(mauchung/ps2[1]);
			tong[1]=mauchung;
			int tongrg[2];
			rutgon(tong, tongrg);
			xuatps(tongrg);
			
			int tu1=ps1[0]*(mauchung/ps1[1]), tu2=ps2[0]*(mauchung/ps2[1]);
			printf("Phan so thu nhat ");
			if(tu1<tu2){
				printf("nho hon");
			}else if(tu1==tu2){
				printf("bang");
			}else {
				printf("lon hon");
			}
			printf(" phan so thu hai");
			break;
	}
	return 0;
}
