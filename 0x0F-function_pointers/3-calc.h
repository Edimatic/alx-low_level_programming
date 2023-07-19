#ifndef MAIN_HEAERD_ FILE_CALC
#define MAIN_HEADER_FILE_CALC

/**
 * struct op - outline Structure op
 * @op: operator
 * @f: function files
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
