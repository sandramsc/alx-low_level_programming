/* function-like macro ABS(x) that computes the absolute value of a number x */
#ifndef ABS_MACRO
#define ABS_MACRO

#ifndef ABS
#define ABS(x) ((x) < 0 ? (-1 * x) : (x))
#endif

#endif
