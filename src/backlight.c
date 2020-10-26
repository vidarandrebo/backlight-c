#include <stdio.h>
#include <stdlib.h>
#include "config.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        return 0;
    }
    FILE *fp;
    fp = fopen(PATH ,"r+");
    char light[20];
    fscanf (fp, "%s", light);
    //Needed for writing at start of file
    fseek(fp, 0, SEEK_SET);
    int lightint = atoi(light);
    int a = atoi(argv[2]);
    char k = argv[1][0];
    switch (k) {
        case '+':
            lightint += a; 
            break;
        case '-':
            lightint -= a;
            break;
        default:
            fclose(fp);
            return 0;
    }
    if (lightint > UPPER) {
        lightint = UPPER;
    }
    if (lightint < LOWER) {
        lightint = LOWER;
    }
    fprintf(fp, "%d\n",lightint);
    fclose(fp);
    return 0;
}
