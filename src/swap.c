#include <stdio.h>

int main() {
	int a;
	printf("a = ");
	scanf("%d", &a);
	int b;
	printf("b = ");
	scanf("%d", &b);

    // swapping with temporary variable
	int temp = a;
	a = b;
	b = temp;
	printf("After swapping (with temp variable):\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

    // swapping without temporary variable
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping (without temp variable):\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}
