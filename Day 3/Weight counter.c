#include <stdio.h>

int main()
{
    //weight converter program

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator");
    printf("1. Kilograms to pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Please enter the weight in kilogram: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equals to %.2f pounds\n", kilograms, pounds);
    }
    else if(choice == 2){
        printf("Please enter the weight in pound: ");
        scanf("%f", &pounds);
        pounds = pounds / 2.20462;
        printf("%.2f pounds is equals to %.2f Kilograms\n", pounds, kilograms);
    }
    else{
        printf("Please enter a valid choice");
    }


    return 0;
}
