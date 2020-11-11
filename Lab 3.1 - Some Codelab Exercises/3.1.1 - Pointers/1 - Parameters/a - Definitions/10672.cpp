/**
 * Write the definition `zeroIt`, which is used to zero out a variable.
 * The function is used as follows:
 * 
 * int x = 5;
 * zeroIt(&x);
 * // x is now equal to 0 
 */

/**
 * &x means address of x
 * *x means value pointed to by x, given that the value of x is an address
 * 
 * These two operators are like opposites.
 * If you want an address of a variable, you use &.
 * If you want the value stored in an address, you use *.
 * 
 * So when we run zeroIt(&x), we are passing in the address of x, then
 * modifying the value located at that address with the dereference operator *.
 * 
 * Changing the value located at an address will change the value for all other
 * variables that have access to the same address.
 * 
 * Hence, passing in the address of x that holds a value of 5, then modifying
 * the value to become 0 will make x equal to 0.
 */
void zeroIt(int *x)
{
    *x = 0;
}