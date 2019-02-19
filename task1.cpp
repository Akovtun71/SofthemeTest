#include <iostream>

int main(int argc, char const *argv[])
{
    FILE *file;
    const char * fileName = "INPUT.TXT";
    
    if ( (file = fopen(fileName, "r")) == NULL ){
        fprintf(stderr, "Can't open file\n");
        return 1;
    }
    
    size_t count = 0;
    size_t maxLen = 0;
    int c;
    while ( (c = fgetc(file)) != EOF ){
        if(c == '1'){
            count++;
            if(count > maxLen) {
                maxLen = count;
            }
        }else{
            count = 0;
        }
        
    }    
    fclose(file);
    printf("Result:%zu", maxLen);
    return 0;
}
