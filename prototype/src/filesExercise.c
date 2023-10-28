#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 200

FILE* openFile(const char* mode)
{
    FILE* fp;
    fp = fopen("filesExercise.txt", mode);

    if (fp == NULL) 
    {
        printf("The file is not opened. The program will "
        "now exit.");
        exit(0);
    }
    else
    {
        printf("\nThe file is opened with mode '%s'\n", mode);
    }
    return fp;
}

int main()
{
    //Reading a file using fgetc
    FILE* filePtr_1 = openFile("r");
    do
    {
        char c = fgetc(filePtr_1);
        printf("Char is: %c\n", c);

        if(feof(filePtr_1))
        {
            printf("\nEND OF THe FILE Reached \n\n");
            break;
        }
    }while(1);
    fclose(filePtr_1);

    //Reading a file using fgets
    FILE* filePtr_2 = openFile("r");
    char buf1[MAX];
    do
    {
        fgets(buf1, 20, filePtr_2);
        printf("%s", buf1);

        if(feof(filePtr_2))
        {
            printf("\nEND OF THe FILE Reached \n\n");
            break;
        }
    }while(1);
    fclose(filePtr_2);

    //Reading a file using fread
    FILE* filePtr_3 = openFile("r");
    char buf2[MAX];
    do
    {
        fread(buf2, 20, 1, filePtr_3);
        printf("%s", buf2);
        memset(buf2, 0, sizeof(buf2));

        if(feof(filePtr_3))
        {
            printf("\nEND OF THe FILE Reached \n\n");
            break;
        }
    }while(1);
    fclose(filePtr_3);

    //Writing to a file using
    FILE* filePtr_4 = openFile("a+");

    fputc('\n', filePtr_4);
    fputc('\n', filePtr_4);

    char fputc_output;
    char string[] = "Writing the string into the txt file using fputc";
    for(int i=0; string[i]!='\0'; i++)
    {
        fputc_output = fputc(string[i], filePtr_4);
        printf("%c", fputc_output);
    }

    fclose(filePtr_4);
    return 0;
}