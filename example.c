#include <stdio.h>

int main() {

        FILE *pointer;
        pointer = fopen("example.txt","w");
        fprintf(pointer,"This is a text written to the file");
        fclose(pointer);
        return 0;
}