/**
 * Given a class `Window`, with integer data members `width`, `height`,
 * `xPos` and `yPos`, write the following two constructors:
 * - A constructor accepting 4 integer arguments: width, height,
 * horizontal position, and vertical position (in that order), that are
 * used to initialize the corresponding members.
 * - A constructor accepting 2 integer arguments: width and height (in that order),
 * that are used to initialize the corresponding members. The xPos and yPos members
 * should be initialized to 0. 
 */

Window(int w, int h, int xP, int yP)
{
	width = w;
	height = h;
	xPos = xP;
	yPos = yP;
}

Window(int w, int h)
{
	width = w;
	height = h;
	xPos = 0;
	yPos = 0;
}