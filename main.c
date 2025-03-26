#include "quotes.h"
#include <time.h>

int main() {
    char* filename = "quotes.txt";
    char* fil[] = {"aret", "ar"};
    print_random_quote(fil);
    char** p_p_quotes = load_quotes(filename);

    srand(time(NULL));
    return 0;
}