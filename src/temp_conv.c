#include <stdio.h>

int main() {
    float celsius, fahr;
    int limit, step;
    fahr = 0;
    limit = 300;
    step = 20;
    while (fahr <= limit) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f \t %6.1f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}