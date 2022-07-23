#include <stdio.h>

int main() {
    FILE *fp;
    char str[45], userinput[75];

    puts("Enter information: ");
    fgets(userinput,75,stdin);
    puts(userinput);


    fp = fopen("C:\\Nvidia\\excelNumbers.csv", "r");
    if (fp == NULL) {

        perror("Error opening file");
        return(-1);
    }
    while (fgets(str,60,fp) != NULL) {

        puts(str);


    }


   if ( fgets (str, 60, fp) != NULL) {

        puts(str);


    }


    fclose(fp);

    return 0;
}
