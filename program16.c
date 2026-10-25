#include "Header.h"
#include <assert.h>     // used for testing

int main()
{
    assert(Addition(10,11) == 22);      // test engine run this function

    assert(Addition(-10,20) == 10);

    assert(Addition(-10,-20) == -30);
    return EXIT_SUCCESS;
}