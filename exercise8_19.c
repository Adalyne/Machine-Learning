#include<stdio.h>
#include<stdlib.h>

double rpower(double b, int n){
	if(n==0){
		return 1;
	} 
	else{
		return (b*rpower(b,(n-1)));
	}
} 

int main(void){
	printf("%f",rpower(2.0,3));
	
	return 0;
}
