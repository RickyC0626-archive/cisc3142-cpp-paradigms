/**
 * Assume that `strikeCounter` has already been declared to be a
 * "pointer to `int`". Assume further that `strikeCounter` has been
 * initialized -- its value is the address of some `int` variable.
 * 
 * Write an expression whose value is four times the value of the
 * variable that `strikeCounter` is pointing to.
 */

// Get the value stored in address of strikeCounter, then multiply it by 4
(*strikeCounter) * 4