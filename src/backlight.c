#include <stdio.h>
#include <stdlib.h>
#include "config.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        return 0;
    }
    char fileval[20];
    FILE *fp;
    fp = fopen(BACKLIGHT ,"r+");
    fscanf (fp, "%s", fileval);
    int backlight = atoi(fileval);
    int increment = atoi(argv[2]);
    char operator = argv[1][0];
    switch (operator) {
        case '+':
            backlight += increment; 
            break;
        case '-':
            backlight -= increment;
            break;
        default:
            fclose(fp);
            return 0;
    }
    if (backlight > UPPER) {
        backlight = UPPER;
    }
    if (backlight < LOWER) {
        backlight = LOWER;
    }
    fprintf(fp,"%d ",backlight);
    fclose(fp);
    return 0;
}
