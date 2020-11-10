/**
 * Write the definition of a function `tripleIt`, which triples
 * its argument but returns nothing so that it can be used as follows:
 * 
 * int x = 5;
 * tripleIt(&x);
 * // x is now equal to 15
 */

void tripleIt(int *x)
{
    *x *= 3;
}