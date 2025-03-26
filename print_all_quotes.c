//
// Created by sandw on 26/03/2025.
//
#include "print_all_quotes.h"
#include <stdio.h>

void print_all_quotes(char ** quotes) {
    for (int i=0;i<MAX_QUOTES;i++) {
        printf("%s\n", quotes[i]);
    }
}

