#include <stdio.h>
#include <stdbool.h>
bool checkPerfectNumber(int n){
	if(n<6){
		return false;
	}
	int tongUoc=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			tongUoc+=i;
		}
	}
	if(tongUoc==n){
    	return true;		
	}else{
		return false;
	}
}
int main(){
	int n1,n2;
	printf("Nhap vao so thu nhat: ");
	scanf("%d",&n1);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&n2);
	if(checkPerfectNumber(n1)){
		printf("%d la so hoan hao\n",n1);
	}else{
		printf("%d khong phai la so hoan hao\n",n1);
	}
	if(checkPerfectNumber(n2)){
		printf("%d la so hoan hao\n",n2);
	}else{
		printf("%d khong phai la so hoan hao\n",n2);
	}
	return 0;
}
