/**
 * Write the definition of a function `doubleIt`, which doubles the value 
 * of its argument but returns nothing so that it can be used as follows:
 * 
 * int x = 5;
 * doubleIt(&x);
 * // x is now equal to 10
 */

void doubleIt(int *x)
{
    *x *= 2;
}