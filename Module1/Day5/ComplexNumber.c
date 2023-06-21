#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

struct Complex readComplex() {
    struct Complex num;
    printf("Enter the real part: ");
    scanf("%f", &(num.real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(num.imaginary));
    return num;
}

void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imaginary);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex product;
    product.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    product.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
    return product;
}

int main() {
    struct Complex complex1, complex2, sum, product;

    printf("Reading the first complex number:\n");
    complex1 = readComplex();

    printf("Reading the second complex number:\n");
    complex2 = readComplex();

    printf("\n");
    printf("Writing the complex numbers:\n");
    writeComplex(complex1);
    writeComplex(complex2);

    printf("\n");
    printf("Adding the complex numbers:\n");
    sum = addComplex(complex1, complex2);
    writeComplex(sum);

    printf("\n");
    printf("Multiplying the complex numbers:\n");
    product = multiplyComplex(complex1, complex2);
    writeComplex(product);

    return 0;
}