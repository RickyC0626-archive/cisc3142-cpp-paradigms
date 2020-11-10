/**
 * The variables xp and yp have both been declared as pointers to
 * integers, and have been assigned values (i.e., they are each pointing
 * to an integer value).
 * 
 * Write the code to exchange the values of these two variables (so that
 * after the swap xp points to what yp originally pointed to and vice-versa
 * -- in other words, in this exercise, you are swapping the pointers).
 * 
 * Declare any necessary variables.
 */

// Set xp pointer variable to a new temp pointer variable
// Then exchange the pointers
int *temp = xp;
xp = yp;
yp = temp;