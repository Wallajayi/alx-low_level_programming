#include "main.h"

/**
 * swap_int - swap the value of two integers.
 * @a: first integer a that swaps with integer b
 * @b: second integer b that swaps with integer a
 */

void swap_int(int *a, int *b);
{
	int temp;/*used as temp storage space and empty*/

	temp = *a;/*a value is put into temp storage*/
	*a = *b;/*b valueis put into empty a storage*/
	*b = temp;/*a value now in temp is then put into empty b*/
}
