#include "quotes.c"
#include <time.h>

int main() {
    char* filename = "quotes.txt";
    char** p_p_quotes = load_quotes(filename);
    print_all_quotes(p_p_quotes);
    free_quotes(p_p_quotes);
    srand(time(NULL));
    return 0;
}