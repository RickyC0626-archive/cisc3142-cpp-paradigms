/**
 * The variables xp and yp have both been declared as pointers to
 * integers, and have been assigned values.
 * 
 * Write the code to exchange the two integers (so that after the swap,
 * xp still points at the same location, but it now contains the
 * integer value originally contained in the location pointed to by y;
 * and vice versa -- in other words, in this exercise, you are swapping the
 * integers, not the pointers).
 * 
 * Declare any necessary variables.
 */

// Extract value located in xp pointer into temp;
// Then swap the values located in each pointer
int temp = *xp;
*xp = *yp;
*yp = temp;