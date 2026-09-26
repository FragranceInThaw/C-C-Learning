#include <stdio.h>

int main()
{
    // if statement = Do some code if a condition is true.
    //                if condition is false, then dont do it.

    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >=65 ){
        printf("you are an senior");
    }
    else if (age >=18 ){ //<< pay attention to the order of your code
        printf("You are an adult"); //they start from the first line, and then ignore the rest if it executed a program
    }
    else if (age < 0){
        printf("You havent been born yet");
    }
    else if (age == 0){
        printf("You are a newborn");
    }
    
    else{
        printf("You are an child");
    }
    
    return 0;
}
