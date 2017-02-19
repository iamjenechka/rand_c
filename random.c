#include <stdio.h>
#include <stdlib.h>
int main ( int argc, char *argv[] )
{
	int n[9];
	srand ( atoi ( argv[1] ) );

	for ( int i = 0; i < 10; i++ ) {
		n[i] = rand () % 10 + 1;
		printf ( "%i\n", n[i] );
	}
}
