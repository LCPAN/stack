#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "stack.h"

int main(void)
{
	int i;
	USER_TYPE data;
	STACK *sp;

	sp = init_stack(8);

	for (i = 0; i < 10; i++) {
		push(sp, i);
	}

	for (i = 0; i < 10; i++) {
		pop(sp, &data);
		printf("%d\n", data);
	}

	destroy_stack(&sp);
	return 0;
}
