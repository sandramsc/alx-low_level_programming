#ifndef ABS_MACRO
#define ABS_MACRO

/* function-like macro ABS(x) that computes the absolute value of a number x */
#ifndef ABS
/*check the location of the arithmetic operator to optain expected output*/
#define ABS(x) (x < 0 ? -(x) : (x))
#endif

#endif
