#include <windows.h>
#include <stdio.h>
#include "aux_ulib.h"

int main( void )
{
	BOOL held;

	AuxUlibInitialize();

	AuxUlibSetSystemFileCacheSize( 1, 2, 0 );

	AuxUlibIsDLLSynchronizationHeld( & held );

	puts( " Press any key to exit...\n" );
	getchar();

	return 0;
}