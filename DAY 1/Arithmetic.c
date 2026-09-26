#include <stdio.h>

int main(){
    // arithmetic = The process of performing mathematical operations on numbers, 
    //              such as addition, subtraction, multiplication, and division. 
    //              In programming, arithmetic operations are used to manipulate 
    //              numerical data and perform calculations.
    // arithmetic operators = +, -, *, /, %
    //
    int x = 2;
    int y = 3;
    int z = 0;
    int a = 10;
    int b = 2;

    printf("Arithmetic Operations\n");
    printf("x = %d, y = %d\n", x, y);
    z = x + y; //< -- Addition operator
    printf("x + y = %d\n", z);
    z = x - y; //< -- Subtraction operator
    printf("x - y = %d\n", z);
    z = x * y; //< -- Multiplication operator
    printf("x * y = %d\n", z);
    printf("\n");
    printf("\n");
    printf("a = %d, b = %d\n", a, b);
    z = a / b; //< -- Division operator
    printf("a / b = %d\n", z);
    z = a % b; //< -- Modulus operator
    printf("a %% b = %d\n", z);

    // augmented assignment operators = shorthand operators that combine an arithmetic 
    //              operation with an assignment.
    printf("\n");
    printf("Augmented Assignment Operations\n");
    x += 5; //< -- Equivalent to x = x + 5
    printf("x += 5: x = %d\n", x);
    y -= 2; //< -- Equivalent to y = y - 2
    printf("y -= 2: y = %d\n", y);
    a *= 3; //< -- Equivalent to a = a * 3
    printf("a *= 3: a = %d\n", a);
    b /= 2; //< -- Equivalent to b = b / 2
    printf("b /= 2: b = %d\n", b);

    return 0;
}
