#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps two integers, and it serves as our declaration
 * @a: *a makes var a, a pointer as it holds the address of var a
 * giving us the ability to manipulate whats stored at the address
 * @b: *b makes var b, a pointer as it holds the address of var a
 * giving us the ability to manipulate whats stored at the addres
 */
void swap_int(int *a, int *b)
/*simple means a and b are pointers and holds an addess*/
{/*this address can now be manipulated in the code block*/
	int temp; /* this serves as temporary*/
	/*var to hold the dereference of pointer a*/

	temp = *a;/* *a is not a pointer but a derefence due to '*'*/
	/*a pointer in this case would only have a*/
	*a = *b;
	*b = temp;
}
