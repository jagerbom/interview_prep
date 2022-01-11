#include <stdio.h>

#define IN (1)
#define OUT (0)

int main()
{
 int c, nc, nw, nl, state;
 state = OUT;
 nc = nw = nl = 0;

 while ((c=getchar()) != EOF) {
	 ++nc;
	 if (c == '\n')
		 ++nl;
	 if (c == ' ' || c == '\t' || c == '\n')
		 state = OUT;
	 else if (state == OUT){
		 ++nw;
		 state = IN;
	 }
 }
 printf("\n word = %d char = %d line = %d \n", nw, nc, nl);
}

