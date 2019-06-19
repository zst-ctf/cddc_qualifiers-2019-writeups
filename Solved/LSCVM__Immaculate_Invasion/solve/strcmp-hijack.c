#include <stdio.h>
#include <string.h>

/*
 * strcmp-hijack.c, Hijack strcmp() function
 */

/*
 * strcmp, Fixed strcmp function -- Always equal!
 */

int strcmp(const char *s1, const char *s2) {

	printf("S1 eq %s\n", s1);
	printf("S2 eq %s\n", s2);

	// ALWAYS RETURN EQUAL STRINGS!
	return 0;
}
