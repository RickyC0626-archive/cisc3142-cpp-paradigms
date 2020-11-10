/**
 * Assume that `ip`, `jp`, and `tp` have all been declared to be
 * pointers to `int` and that `result` has been declared to be
 * an array of 100 elements. Assume further that `ip` has
 * been initialized to point to an element in the first
 * half of the array and that `jp` has been initialized to
 * point to an element in the second half of the array.
 * 
 * Write some code that makes `jp` point to the element
 * that `ip` was pointing to and that makes `ip` point to
 * the element that `jp` was pointing to.
 */

tp = ip;
ip = jp;
jp = tp;