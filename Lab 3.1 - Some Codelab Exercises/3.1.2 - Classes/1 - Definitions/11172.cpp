/**
 * Write a full class definition for a class named `ContestResult`, and 
 * containing the following members:
 * - A data member `winner` of type string, initialized to the empty string
 * - A data member `secondPlace` of type string, initialized to the empty string
 * - A data member `thirdPlace` of type string, initialized to the empty string
 * - A member function called `setWinner` that has one parameter, whose value it
 * assigns to the data member `winner`.
 * - A member function called `setSecondPlace` that has one parameter, whose value it
 * assigns to the data member `secondPlace`.
 * - A member function called `setThirdPlace` that has one parameter, whose value it
 * assigns to the data member `thirdPlace`.
 * - A member function called `getWinner` that has no parameters and returns the value 
 * of the data member `winner`.
 * - A member function called `getSecondPlace` that has no parameters and returns the value 
 * of the data member `secondPlace`.
 * - A member function called `getThirdPlace` that has no parameters and returns the value 
 * of the data member `thirdPlace`.
 */

class ContestResult
{
	private:
		std::string winner = "";
		std::string secondPlace = "";
		std::string thirdPlace = "";
	public:
		void setWinner(std::string w) { winner = w; }
		void setSecondPlace(std::string s) { secondPlace = s; }
		void setThirdPlace(std::string t) { thirdPlace = t; }
		std::string getWinner() { return winner; }
		std::string getSecondPlace() { return secondPlace; }
		std::string getThirdPlace() { return thirdPlace; }
};