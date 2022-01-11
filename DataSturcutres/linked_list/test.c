#include<stdio.h>

void func(int *a) 
{
    int c = 30;
    *a = 20;
     a = &c;
}
int main() {
    int *a = NULL;
    int b = 10;
    a = &b;

    printf("value of a is %p value of b is %d \n", a, b);
    func(a);
    printf("value of a is %p value of b is %d \n", a, b);
}