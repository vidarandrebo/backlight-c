#include <stdio.h>
#include <stdlib.h>
#include "config.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        return 0;
    }
    char fileval[20];
    FILE *fp;
    fp = fopen(BACKLIGHT ,"r");
    fscanf (fp, "%s", fileval);
    fclose(fp);
    int bl = atoi(fileval);
    int inc = atoi(argv[2]);
    char op = argv[1][0];
    switch (op) {
        case '+':
            bl += inc; 
            break;
        case '-':
            bl -= inc;
            break;
        default:
            return 0;
    }
    if (bl > UPPER) {
        bl = UPPER;
    }
    if (bl < LOWER) {
        bl = LOWER;
    }
    fp = fopen(BACKLIGHT ,"w");
    fprintf(fp,"%d",bl);
    fclose(fp);
    return 0;
}
