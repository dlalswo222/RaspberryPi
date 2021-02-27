#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input[32];
    fgets(input,32,stdin);

    input[strlen(input)-1] = '\0';

    //printf(input);
    system(input);
    return 0;
}