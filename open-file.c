#include <stdio.h>

int main()
{
    FILE *fp;
    char str[60];

    /* open the file for reading  */
    fp = fopen("file" , "r");

    if(fp == NULL) {
        perror("Error opening file");
        return(-1);
    }

    if( fgets (str, 60, fp)!=NULL) {
        /* writing file to stdout */
        puts(str);
    }
    fclose(fp);
    return(0);
}
