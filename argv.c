// Argv prints the argument list.
#include <stdio.h>

int main(int argc, char **argv)
{
    for (int i=0; i<argc; i++) {
        printf("%d\t%s\n", i, argv[i]);
    }
}
