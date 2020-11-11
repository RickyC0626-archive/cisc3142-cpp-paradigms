/**
 * Assume that `ip1`, `ip2`, and `ip3` have already been declared
 * to be of type "pointer to `int`". Assume further that each of
 * these pointer variables have been initialized -- each points to
 * some `int` variable.
 * 
 * Write a statement that compares the sume of the variables that
 * `ip1` and `ip2` point to, and assigns that value (the sum) to
 * the variable that `ip3` points to.
 */

*ip3 = (*ip1) + (*ip2);