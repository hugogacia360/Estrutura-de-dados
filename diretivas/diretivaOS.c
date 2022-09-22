#include <stdio.h>
#include <stdlib.h>

    #ifdef __linux__
        #include <unistd.h>
        #define CLEAR "clear"
#elif _WIN32
        #include <windows.h>
        #define CLEAR "cls"
    #endif

int main (void){

    for (int i = 0; i < 10; i++){
        printf("Diretivas de compilação");
    }
    system(CLEAR);
    printf("A tela foi limpa");

    return 0;
}