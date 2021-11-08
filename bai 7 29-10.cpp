#include"stdio.h"
#include"conio.h"
#define gia1 15000
#define gia2 13500
#define gia3 11000
int main(){
	float n,tien;
	printf("nhap vao so km taxi da di la ");
	scanf("%f",&n);
	if(n<=1){
		tien=gia1;
	}else if(1<n && n<=5){
		tien= gia1 + (n-1)*gia2;
	}else if(n>5 && n<=120){
		tien=gia1+(n-1)*gia2+(n-5)*gia3;
	}else{
		tien=(gia1+4*gia2+(n-5)*gia3)*0.9;
	}
	printf("so tien taxi can tra la %.2f",tien);
}
