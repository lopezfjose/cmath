
#include <string.h>


//char *util_strrev(char *str)
char *util_strrev(char *str)
{
	  char *p1, *p2;

	  if (! str || ! *str)
			return str;
	  for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
	  {
			*p1 ^= *p2;
			*p2 ^= *p1;
			*p1 ^= *p2;
	  }
	  
	  return str;
}
