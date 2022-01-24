#include "include/can.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Please specify input file\n");
        return 1;
    }

    compile_can_file(argv[1]);

    return 0;
}
