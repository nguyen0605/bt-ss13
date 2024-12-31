#include <stdio.h>
int findMaxCommonDivisor(int n1, int n2){
	int max=0;
	for(int i=1;i<=(n1<n2?n1:n2);i++){
		if(n1%i==0 && n2%i==0){
			max=i;
		}
	}
	return max;
} 
int main(){
	int a=18, b=24;
	int result=findMaxCommonDivisor(a,b);
	printf("Uoc chung lon nhat cua %d va %d la %d",a,b,result);
}
