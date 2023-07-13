#include<stdio.h>
#include<stdlib.h>

int fib(int n){
	int i,product=1;
	for(i=1;i<=n;i++){
		product=product*i;
	}
	
	return product;
}

int main(void){
	printf("%d",fib(6));
	
	return 0;
}
