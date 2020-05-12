//In C,access to command line arguments can be obtained through the main()
//function by specifying two additional arguments for it: an integer and a 
//pointer to an array of strings. An integer specifies the number of command
//line arguments, and an array of strings holds all these arguments.

/* gcc -Wall -g arguments.c -o arguments */

#include <stdio.h>

int main(int arg_count, char *arg_list[]) 
{
    int i;
    printf ("There were %d arguments provided:\n", arg_count);
    for (i = 0; i < arg_count; i++)
	printf ("argument #%d\t-\t%s\n", i, arg_list[i]);
return 0;
}
