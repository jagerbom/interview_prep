/* 
1. Open a file
2. write on the file
3. read from the file
4. save and exit
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp1 = NULL;
    fp1 = fopen("file.txt", "w");
    if (fp1 == NULL) {
        printf("\n error in opening file");
        return 0;
    }
    fprintf(fp1, "I am trying to print a sample text");
    fclose(fp1);

    fp1 = fopen("file.txt", "r");
    while (1)
    {
        char ch = fgetc(fp1);
        if (ch == EOF) {
            break;
        }
        printf("%c", ch);
    }
    fclose(fp1);
    
}