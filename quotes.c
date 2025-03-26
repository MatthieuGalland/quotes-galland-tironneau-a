 // quotes.c
#include "quotes.h"

void print_quote(char ** quotes, int index) {
    printf("%s\n", quotes[index]);
}

void print_random_quote(char ** quotes) {
    int index = rand() % MAX_QUOTES;
    print_quote(quotes, index);
}
char** load_quotes(char* filename){
    FILE * p_quotes;
    char** p_p_quotes = NULL;
    int k = 0;
    p_p_quotes = (char**)malloc(MAX_QUOTES*sizeof(char*));
    p_quotes = (FILE*)fopen(filename, "rb");
    for(int i = 0; i<MAX_QUOTES; i++){
        k = 0;
        p_p_quotes[i] = (char*)malloc(MAX_QUOTE_SIZE);
        while((fread(p_p_quotes[i], sizeof(char), 1, p_quotes) !='\0') &&(k<MAX_QUOTE_SIZE)){
            k++;
        }
    }
    return p_p_quotes;
}


void delete_quote(char ** quotes, int index) {
    if (quotes[index] != NULL) {
        free(quotes[index]);
        quotes[index] = NULL;
    }
}