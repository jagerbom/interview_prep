#include <stdio.h>

int main(int argc, char *agrv[])
{
    int i = 0, i_prev = 0;
    printf("\n *****This programme determines the ranges of data types in C*****");
    while(1) {
        i_prev=i;
        i++;
        if (i < 0) {
            printf("\n range of integer is %d to %d \n", i, i_prev);
            break;
        }
    }
}