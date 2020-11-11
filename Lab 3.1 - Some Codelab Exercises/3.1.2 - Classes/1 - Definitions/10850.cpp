/**
 * Write the interface (.h file) of a class `Player` containing:
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

class Player
{
    private:
        std::string name;
        int score;

    public:
        void setName(std::string name);
        void setScore(int score);

        std::string getName();
        int getScore();
};