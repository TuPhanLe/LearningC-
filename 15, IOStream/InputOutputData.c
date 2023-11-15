#include <stdio.h>


int main(){

    int x,y;
    FILE* inputFile = fopen("Input.txt","r");
    fscanf(inputFile,"%d%d",&x,&y);
    FILE* outputFile = fopen("Output.txt","w");
    fprintf(outputFile,"x + y = %d",x+y);
    return 0;
}