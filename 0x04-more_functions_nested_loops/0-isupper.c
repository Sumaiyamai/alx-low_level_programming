#include "main.h"

/**
 *is_upper - if is uppercase return 1, if not return 0,
 *
 * @c: this is entry
 *
 * return 0,
 *
 **/

	int _isupper(int c)
{

	if ((c >= A && c >= a) || (c >= Z && c >= z))
	{
		return (1);
	}
	return (0);
}
