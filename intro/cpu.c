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
    // printf("%s, %ld", str, strlen(str));
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
    if (str[0] == 'A') {
        break;
        /*
        Add this and run
        ./cpu A & ./cpu B & ./cpu C ; fg
        prints
        A
        B
        C
        B
        C
        ...
        and then interrupt with Ctrl-C, then only B is printed
        B
        B
        ...
        because the foreground program 'C' is interrupted
        */
    }
	Spin(1);
    }
    return 0;
}

