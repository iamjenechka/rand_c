#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main ( int argc, char *argv[] )
{
	if (argc < 2 ) {
		fprintf(stderr, "syntax: rand <seed>");
		exit(EINVAL);
	}

	srand ( atoi ( argv[1] ) );

	for ( int i = 0; i < 10; i++ ) {
		int value = rand () % 10 + 1;
		printf ( "%i\n", value );
	}

	return 0;
}
