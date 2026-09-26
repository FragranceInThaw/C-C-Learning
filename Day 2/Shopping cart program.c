#include <stdio.h>
#include <string.h>

int main(){
    
    // SHOPPING CART PROGRAM

    char item[50] = "";
    float price=0.0f;
    int quantity=0;
    char currency='$';
    float total=0.0f;

    printf("what item do you want to add to your cart? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("what is the price of %s? ", item);
    scanf("%f", &price);
    
    printf("how many %s do you want to add to your cart? ", item);
    scanf("%d", &quantity);

    total = price * quantity;

    printf("Item: %s\n", item);
    printf("Price: %.2f %c\n", price, currency);
    printf("Quantity: %d\n", quantity);
    printf("Total: %.2f %c\n", total, currency);

    return 0;
}
