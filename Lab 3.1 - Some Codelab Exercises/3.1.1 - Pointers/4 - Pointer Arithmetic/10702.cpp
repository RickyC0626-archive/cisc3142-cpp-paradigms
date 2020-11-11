/**
 * Assume that `ip` has been declared to be a pointer to
 * `int` and that `result` has been declared to be an array of
 * 100 elements. Assume further that `ip` has been initialized
 * to point to an element in the first half of the array.
 * 
 * Write an expression whose value is the sum of the element
 * that `ip` points to plus the next two elements.
 */

*ip + *(ip + 1) + *(ip + 2)