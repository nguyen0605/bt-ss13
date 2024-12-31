#include <stdio.h>
long long tinhGiaiThua(int n){
	if(n<0){
		printf("Khong co giai thua cho so am!");
		return 0;
	}
	long long giaiThua=1;
	for(int i=2;i<=n;i++){
		giaiThua*=i;
	}
	return giaiThua;
}
int main(){
	int number;
	printf("Nhap vao mot so nguyen duong bat ki: ");
	scanf("%d",&number);
	long long result=tinhGiaiThua(number);
	if (number>=0){
        printf("Giai thua cua %d la: %lld", number, result);
    }
	return 0;
}
