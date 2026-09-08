#include<stdio.h>
int main(){
	int num1;
	printf("Enter Your Number: ");
	scanf("%d",&num1);
	if(num1==0){
		printf("Your Number is zero");
	}
	else{
		printf("Your number is non-zero");
	}
	return 0;
}
