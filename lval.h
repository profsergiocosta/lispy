#ifndef lval_h
#define lval_h

typedef enum
{
    LVAL_NUM,
    LVAL_ERR
} ltype;

/* Create Enumeration of Possible Error Types */
typedef enum
{
    LERR_DIV_ZERO,
    LERR_BAD_OP,
    LERR_BAD_NUM
} etype;

/* Declare New lval Struct */
typedef struct
{
    ltype type;
    long num;
    etype err;
} lval;

lval lval_num(long x);
lval lval_err(etype x);

void lval_print(lval v);
void lval_println(lval v);

#endif