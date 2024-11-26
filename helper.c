#include <stdlib.h>

/*established the guesing number*/
int thinkNumber() {
    int a = ( rand() % 100 ) + 1;
    return a;
}