#include <stdio.h>
#include <stdlib.h>
#include "keyboard.h"
#include <unistd.h>

int main(){

    char* bash = "bash ~/temp.sh";
    while(1){
        if(kbhit()){
            if(getchar() == 'q')
                break;
        }
        system(bash);
        sleep(30);
    }
    return 0;
}