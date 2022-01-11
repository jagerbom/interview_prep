#include <stdio.h>

#define IN (1)
#define OUT (0)

int main()
{
 int c, nc, nw, nl;
 nc = nw = nl = 0;

 while ((c=getchar()) != EOF) {
	 if (c == ' ' || c == '\t' || c == '\n') {
		 printf("\n");
	 }
	 else {
		 putchar(c);
	 }
 }
}

