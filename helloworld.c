#include <stdio.h>

unsigned int factorial(unsigned int number)
{
    return number <= 1 ? 1 : factorial(number - 1) * number;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
