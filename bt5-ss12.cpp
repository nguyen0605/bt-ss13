#include <stdio.h>
#include <stdbool.h>
bool checkIsPrime(int n){
	if(n<2){
		return false;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n1,n2;
	printf("Nhap vao so thu nhat: ");
	scanf("%d",&n1);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&n2);
	if(checkIsPrime(n1)){
		printf("%d la so nguyen to\n",n1);
	}else{
		printf("%d khong phai la so nguyen to\n",n1);
	}
	if(checkIsPrime(n2)){
		printf("%d la so nguyen to\n",n2);
	}else{
		printf("%d khong phai la so nguyen to\n",n2);
	}
	return 0;
}
