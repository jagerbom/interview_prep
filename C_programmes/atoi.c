#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc != 2) {
        printf("\n please enter one input");
        return 0;
    }
    char *a = argv[1];
    int a_int = 0;
    a_int = atoi(a);
    if (*a != '0' && a_int == 0) {
        printf("\n invalid input");
        return 0;
    }
    printf("\n integer equivalant is %d \n", a_int);
}