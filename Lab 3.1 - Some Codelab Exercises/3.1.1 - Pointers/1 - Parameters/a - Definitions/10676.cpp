/**
 * Write the definition of a function `minMax` that has five parameters.
 * The first three parameters are integers. The last two are set by the
 * function to the largest and smallest of the values of the first three
 * parameters. The function does not return a value.
 * 
 * The function can be used as follows:
 * 
 * int a = 31, b = 5, c = 19, big, small;
 * minMax(a, b, c, &big, &small);
 * // big is now 31
 * // small is now 5
 */

void minMax(int a, int b, int c, int *big, int *small)
{
    // The larger value between b and c
    int largeBnC = (b > c ? b : c);
    // The larger value between largeBnC and a
    *big = (a > largeBnC ? a : largeBnC);

    // The smaller value between b and c
    int smallBnC = (b < c ? b : c);
    // THe smaller value between smallBnC and a
    *small = (a < smallBnC ? a : smallBnC);
}