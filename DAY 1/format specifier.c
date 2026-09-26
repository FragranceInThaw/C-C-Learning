#include <stdio.h>

int main(){
    // format specifier = special tokens that begin with a % symbol,
    //                    used in formatted input and output functions to specify 
    //                    the type of data being processed.   
    // %d = format specifier for integers (decimal)
    // %f = format specifier for floating-point numbers
    // %c = format specifier for characters
    // %s = format specifier for strings

    int age = 19;
    float snbt = 672.17;
    double pi = 3.14159265358979323846;
    char currency = '$';
    char name[] = "REDACTED";

    printf("Age: %d\n", age);
    printf("SNBT: %f\n", snbt);
    printf("Pi: %lf\n", pi);
    printf("Currency: %c\n", currency);
    printf("Name: %s\n", name);

    return 0;
}
