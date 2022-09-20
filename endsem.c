#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
    FILE *fptr1, *fptr2;
    char c;

    // Open one file for reading
    fptr1 = fopen("inp.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", "inp.txt");
        exit(0);
    }

    // Open another file for writing
    fptr2 = fopen("op.txt", "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", "op.txt");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    printf("\nContents copied to %s", "op.txt");

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
