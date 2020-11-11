#include <iostream>

class Course
{
    private:
        int course_code;
        int credits;
        char grade;
    public:
        Course(int course_code, int credits, char grade) : 
            course_code(course_code), credits(credits), grade(grade) {}
        int getCourseCode() const { return course_code; }
        int getCredits() const { return credits; }
        char getGrade() const { return grade; }

        /**
         * Prints the course details out in the following format:
         * 
         * course_code credits grade
         * 4321 (4 credits): A
         */
        void print(std::ostream &os) const
        {
            os << course_code << " (" << credits << " credits): " << grade << std::endl;
        }
};

inline std::ostream &operator << (std::ostream &os, const Course &course)
{
    course.print(os);
    return os;
}