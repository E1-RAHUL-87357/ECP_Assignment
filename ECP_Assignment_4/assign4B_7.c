#include <stdio.h>
void calculateSumAndProduct(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}
int main() {
    int x, y;
    int sum, product;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    calculateSumAndProduct(x, y, &sum, &product)
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    return 0;
}

























