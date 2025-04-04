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
        while((fread(p_p_quotes[i], sizeof(char), sizeof(char), p_quotes) != '\n') &&(k<MAX_QUOTE_SIZE)){
            k++;
        }
        p_p_quotes[i][k] = '\0';
    }
    return p_p_quotes;
}

void free_quotes(char** p_p_quotes){
    for (int i=0; i<MAX_QUOTES; i++){
        free(p_p_quotes[i]);
    }
    free(p_p_quotes);
}

void delete_quote(char ** quotes, int index) {
    if (quotes[index] != NULL) {
        free(quotes[index]);
        quotes[index] = NULL;
    }
}

void print_all_quotes(char ** quotes) {
    for (int i=0;i<MAX_QUOTES;i++) {
        printf("%s\n", quotes[i]);
    }
}