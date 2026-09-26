#include <stdio.h>

int main(){
    // format specifier = special tokens that begin with a % symbol,
    //                    used in formatted input and output functions to specify 
    //                    the type of data being processed.   
    // %3d = format specifier for integers (decimal) with a minimum width of 3 characters
    // %-4d = format specifier for integers (decimal) with a minimum width of 4 characters, 
    //         left-justified
    // %03d = format specifier for integers (decimal) with a minimum width of 3 characters, 
    //         padded with leading zeros
    // 



    int num = 1;
    int num2 = 10;
    int num3 = -1;

    printf("%3d\n", num);
    printf("%-4d\n", num2);
    printf("%03d\n", num3);

    printf("\n");
    // precision 
    printf("Precision Test\n");
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.2f\n", price1); //< if this is %.1f, it will round to 1 decimal place
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);
    printf("\n");
    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;
}
