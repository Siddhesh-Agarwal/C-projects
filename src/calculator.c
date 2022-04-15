#include <stdio.h>

void add(int x, int y) {
    printf("x + y = %d\n", x + y);
}

void sub(int x, int y) {
    printf("x - y = %d\n", x - y);
}

void mul(int x, int y) {
    printf("x * y = %d\n", x * y);
}

void div(int x, int y) {
    printf("x / y = ");
    if (y == 0) {
        printf("ZeroDivisionError\n");
    } else {
        printf("%d\n", x / y);
    }
}

void mod(int x, int y) {
    printf("x (mod y) = ");
    if (y == 0) {
        printf("ZeroDivisionError\n");
    } else {
        // modulus operation
        int temp = x;
        while (temp > y) {
            temp -= y;
        }
        printf("%d\n", temp);
    }
}

void power(int x, int y) {
    int temp = 1;
    if (y > 0) {
        for (int i = 0; i < y; i++) {
            temp *= x;
        }
    } else {    
        for (int i = 0; i < y; i++) {
            temp /= x;
        }
    }
    printf("x ^ y = %d\n", temp);
}

void main() {
    int x, y;
    char op;
    printf("x = ");
    scanf("%d", &x);
    printf("op =");
    scanf(" %c", &op);
    printf("y = ");
    scanf("%d", &y);

    // output
    if (op == '+') {
        add(x, y);
    } else if (op == '-') {
        sub(x, y);
    } else if (op == '*') {
        mul(x, y);
    } else if (op == '/') {
        div(x, y);
    } else if (op == '%') {
        mod(x, y);
    } else if (op == '^') {
        power(x, y);
    } else {
        printf("Invalid operation");
    }
    // add(x, y);
    // sub(x, y);
    // mul(x, y);
    // div(x, y);
    // mod(x, y);
    // power(x, y);
}
