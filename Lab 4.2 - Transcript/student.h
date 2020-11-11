#include <string>
#include <vector>
#include "course.h"

class Student
{
    private:
        int id;
        std::string name;
        std::vector<Course> courses;
    public:
        Student(int id, std::string name) : id(id), name(name) {}
        int getId() const { return id; }
        std::string getName() const { return name; }
        std::vector<Course> &getCourses() { return courses; }

        /**
         * Calculate and return the student's GPA
         */
        float getGPA() const;

        /**
         * Prints student details in the following format:
         * 
         * id name gpa
         * 143 Smith: 3.57143
         * 143 Jones: 2
         */
        void print(std::ostream &os) const;
};

inline std::ostream &operator << (std::ostream &os, const Student &student)
{
    student.print(os);
    return os;
}