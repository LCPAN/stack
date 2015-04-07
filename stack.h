#ifndef __STACK_H__
#define __STACK_H__ 

	#define TRUE        1
	#define FALSE       0
	//#define USER_TYPE	char

	typedef unsigned char boolean;

	typedef struct STACK
	{
	    USER_TYPE *stack;
	    int max_room;
	    int top;
	
	}STACK;
	
	
	STACK *init_stack(int MaxRoom);
	void destroy_stack(STACK **spp);
	void reset_stack(STACK *sp);
	boolean is_stack_empty(STACK stack);
	boolean is_stack_full(STACK stack);
	boolean push(STACK *sp, USER_TYPE data);
	boolean pop(STACK *sp, USER_TYPE *data);
	boolean read_top(STACK stack, USER_TYPE *data);
	

#endif
