#include "student.h"

enum GradeWeight { A = 4, B = 3, C = 2, D = 1, F = 0 };

GradeWeight toWeighted(char grade)
{
    switch(grade)
    {
        case 'A': return A;
        case 'B': return B;
        case 'C': return C;
        case 'D': return D;
        case 'F': return F;
        default: return F;
    }
}

float Student::getGPA() const
{  
    int totalCredits = 0;
    float totalWeighted = 0;

    for (auto course : courses)
    {
        int credits = course.getCredits();
        int gradeWeight = toWeighted(course.getGrade());
        
        totalCredits += credits;
        totalWeighted += credits * gradeWeight;
    }
    return totalCredits != 0 ? (totalWeighted / totalCredits) : 0;
}

void Student::print(std::ostream &os) const
{
    os << id << " " << name << ": " << getGPA() << std::endl;

    for (auto course : courses)
    {
        os << "--- " << course;
    }
}