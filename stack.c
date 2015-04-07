#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "stack.h"

STACK *init_stack(int max_room)
{
	STACK *sp;

	sp = (STACK *)malloc(sizeof(STACK));

	sp->max_room = max_room;
	sp->top = 0;
	sp->stack = (USER_TYPE *)malloc(max_room * sizeof(USER_TYPE));
	
	return (sp);
}

void destroy_stack(STACK **spp)
{
	if ( *spp != NULL ) {
		if ( ((*spp)->stack != NULL) ) {
			free((*spp)->stack);
		}
		free((*spp));
	}
}


void reset_stack(STACK *sp)
{
	if ( sp != NULL ) {
		sp->top = 0;
	}
} 

boolean is_stack_empty(STACK s)
{
	return ( s.top <= 0 );
}

boolean is_stack_full(STACK s)
{
	return ( s.top >= s.max_room );
}

boolean push(STACK *sp, USER_TYPE data)
{
	int status = TRUE;
	if ( sp != NULL ) {
		if ( !(is_stack_full(*sp) == TRUE) ) {
			sp->stack[sp->top++] = data;
		}
		else {
			status = FALSE;
		}
	}
	else {
		status = FALSE;
	}
	return (status);
}

boolean pop(STACK *sp, USER_TYPE *data)
{
	int status;
	if ( sp != NULL ) {
		if ( !(is_stack_empty(*sp) == TRUE) ) {
			*data = sp->stack[--sp->top];
		}
		else {
			status = FALSE;
		}
	}
	else {
		status = FALSE;
	}
	return (status);
}
boolean read_top(STACK s, USER_TYPE *data)
{
	int status = TRUE;

	if ( !(is_stack_empty(s)) ) {
		*data = s.stack[s.top-1]; 
	}
	else {
		status = FALSE;
	}
	return (status);
}
