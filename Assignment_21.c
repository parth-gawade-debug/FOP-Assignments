//in this program we do file handaling(using read,open,close)
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *source,*dest;
    char ch;
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("File not found\n");
        exit(1);
    }
    dest =fopen("dest.txt","w");
    if (dest == NULL) {
        printf("Error creating destination file\n");
        exit(1);
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied successfully\n");
    
    return 0;
}
