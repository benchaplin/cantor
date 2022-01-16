#include "include/can.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Please specify input file");
        return 1;
    }
    return 0;
}
