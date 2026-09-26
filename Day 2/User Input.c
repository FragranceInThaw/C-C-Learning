#include <stdio.h>
#include <string.h>

int main(){

    int age=0;
    float gpa=0.0;
    char name[30]={'\0'};
    char grade='\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: "); // Prompt for grade input
    scanf(" %c", &grade); // Space before %c to consume any leftover whitespace

    getchar(); // Consume the newline character left by previous scanf
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read a line of input for the name, including spaces
    name[strcspn(name, "\n")] = '\0'; // Remove the newline character from the name

    printf("Your age is: %d\n", age);
    printf("Your gpa is: %.2f\n", gpa);
    printf("Your name is: %s\n", name);
    printf("Your grade is: %c\n", grade);

    return 0;
}
