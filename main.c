#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char    yourName[80];
    
    if (argc > 1) {
        strcpy(yourName, argv[1]);
    } else {
        strcpy(yourName, "whatever your name is.");
    }
    
    printf("Hello, %s\n", yourName);
    return 0;
}
