#include <stdio.h>
#include <string.h>

int main(){
    
    //mad lib program

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);

    printf("enter an noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);

    printf("enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);

    printf("enter an verb (ending w/-ing): ");
    fgets(verb, sizeof(verb), stdin);

    printf("enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);

    printf("today i went to a %s", adjective1);
    printf(" and saw a %s", noun);
    printf(" which was %s", adjective2);
    printf(" and %s", verb);
    printf(" and %s.", adjective3);

    return 0;
}
