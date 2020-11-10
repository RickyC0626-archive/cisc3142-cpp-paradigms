/**
 * Write an expression that retrieves the value in the location
 * immediately after the location pointed to by the integer
 * pointer variable `ip`.
 */

// We increment the value of the address by 1 first,
// the retrieve the value
*(ip + 1)