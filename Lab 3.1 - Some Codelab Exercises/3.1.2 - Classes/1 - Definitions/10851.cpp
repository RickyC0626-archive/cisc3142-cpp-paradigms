/**
 * Write the implementation (.cpp file) of the `Player` class from
 * the previous exercise.
 * 
 * Again, the class contains:
 * - A data member `name` of type string
 * - A data member `score` of type int
 * - A member function called `setName` that accepts a parameter and
 * assigns it to `name`. The function returns no value.
 * - A member function called `setScore` that accepts a parameter and
 * assigns it to `score`. The function returns no value.
 * - A member function called `getName` that accepts no parameters and
 * returns the value of `name`.
 * - A member function called `getScore` that accepts no parameters and
 * returns the value of `score`.
 */

void Player::setName(std::string n) { name = n; }
void Player::setScore(int s) { score = s; }

std::string Player::getName() { return name; }
int Player::getScore() { return score; }