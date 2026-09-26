#include <stdio.h>

int main(){

       // Variable test [Integral]
        //Variable = A reusable container that stores data values.
                    //in C, variables must be declared with a specific data  
                    //type before they can be used. 
                    //The data type determines the kind of data that can be
                    //stored in the variable, such as integers,
                    //floating-point numbers, characters, etc.
        //integral = A whole number that can be positive, negative, or zero. 
                    //It does not have a fractional or decimal part.
        //float = A data type that represents numbers with fractional parts. 
                    //It can store decimal values and is used when more precision is 
                    //required than what integers can provide. In C, 
                    //the float data type typically occupies 4 bytes of memory 
                    //and can represent a wide range of values, 
                    //including very small and very large numbers.
        // double = A data type that represents numbers with fractional parts, similar to float, but with double the precision. 
                    //It can store decimal values and is used when even more precision is required than what float can provide. 
                    //In C, the double data type typically occupies 8 bytes of memory and can represent a wider range of values, 
                    //including very small and very large numbers, with greater accuracy than float.
        //char = A data type that represents a single character. 
                    //It is used to store individual characters, such as letters, digits, or symbols. 
                    //In C, the char data type typically occupies 1 byte of memory and can represent 
                    //a character from the ASCII character set or other character encodings.
            //string = A sequence of characters, often used to represent text.
    float IPS = 3.5; // Example of a floating-point variable
    float snbt = 672.17;
    float temp  = 33.3;
    int year = 2026; // Example of an integer variable
    int age  = 33;
    double pi = 3.14159265358979323846; // More precise value of pi using double data type
    double e = 2.71828182845904523536; 
    char initial = 'F'; // Example of a character variable
    char symbol = '!';
    char name[] = "[REDACTED]"; // Example of a string variable


    printf("hello my Name is [%s]\n");
    printf("as of %d, i achieved a score of %.2f in my snbt.\n", year, snbt);
    printf("i wish to reach IPS of %.2f in my first semester.\n", IPS);
    printf("its currently %.1f degrees Celsius.\n", temp);
    printf("the value of pi is %.10f.\n", pi);
    printf("the value of e is %.10f.\n", e);
    printf("my initial is %c%c", initial, symbol);


    return 0;
}
