/**
 * Objects of the `Window` class require a width (integer) and a
 * height (integer) be specified (in that order) upon definition.
 * 
 * Declare two integers corresponding to a width and a length
 * and read values into them from standard input (in that order).
 * 
 * Use these value to define an object of type `Window` named `newWindow`.
 */

int width, height;
cin >> width >> height;

Window newWindow(width, height);