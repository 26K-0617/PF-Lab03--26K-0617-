#include<stdio.h>
int main(){
	int num1;
	printf("Enter Your Number: ");
	scanf("%d",&num1);
	if(num1% 2 == 0){
		printf("Your Number is even");
	}
	else{
		printf("Your number is odd");
	}
	return 0;
}
