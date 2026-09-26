#include <stdio.h>
#include <stdbool.h> //<-this need to be added if you use bool
int main(){
    // test test
    //bool = A data type that represents a boolean value, 
    //which can be either true or false. It is used to store logical 
    //values and is often used in conditional statements 
    //and loops to control the flow of a program based on certain conditions.

   bool isOnline = false;

   if(isOnline){
         printf("The user is online.\n");
    } else {
         printf("The user is offline.\n");
    }
    return 0;
}
