#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"

int main(int argc, char *argv[])
{
    if (argc != 2) {
	fprintf(stderr, "usage: cpu <string>\n");
	exit(1);
    }
    char *str = argv[1];
    printf("%s, %ld", str, strlen(str));
    /*
    TODO(minigb): It's interesting that the input argument "A", like
    ./cpu "A"
    is recognized as a string A without the quotation marks.
    So here the result is shown as

    A
    A
    A
    ...
    
    and on, not
    "A"
    "A"
    "A"
    ...
    */

    while (1) {
	printf("%s\n", str);
	Spin(1);
    }
    return 0;
}

