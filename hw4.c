#include <stdio.h>

int recursion(int n){
	int result;
	
	if(n == 0 || n == 1){
		printf("%d", n);
	}
	else{
		recursion(n / 2);
		printf("%d", n % 2);
	}
	
	return result;
}

int main(void){
	int n = 0;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	recursion(n);
	
	return 0;
}
