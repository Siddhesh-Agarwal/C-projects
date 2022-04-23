#include <stdio.h>
#include <conio.h>
int cube(int n){
	return n * n * n;
}

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	int n;
	int total = 0;
	int num1 = num;
	while(num > 0){
		n = num % 10;
		total += cube(n);
		num = num / 10; 
	}
	if (total == num1){
		printf("%d is an Armstrong number", num1);
	} else {
		printf("%d is not an Armstrong number", num1);
	}
	return 0;
}
