#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

#include "student.h"

using namespace std;

void load(string fname, vector<Student> &students);
void write(const vector<Student> &students);
bool compare(const Student &s1, const Student &s2);	

int main()
{
    try
    {
        vector<Student> students;

        load("students.data", students);

        sort(students.begin(), students.end(), compare);

        write(students);
        cout << students.size() << " records processed";

        return 0;
    } 
    catch(string message)
    {
        cout << "*** Exception *** " << message << endl;
        exit(1);
    }
}

void load(string fname, vector<Student> &students)
{
    ifstream ifs(fname.c_str());
    if (!ifs) throw string("input file " + fname + " not found");

    int id, course_id, credits;
    string name;
    char grade;

    while (!ifs.eof() && ifs >> id >> name)
    {
        Student s(id, name);
        
        while (ifs >> course_id && course_id != -1)
        {
            ifs >> credits >> grade;
            s.getCourses().push_back(Course(course_id, credits, grade));
        }
        students.push_back(s);
    }
    ifs.close();
}

bool compare(const Student &s1, const Student &s2)
{
    return s1.getGPA() > s2.getGPA();
}

void write(const vector<Student> &students)
{
    for (auto student : students)
        cout << student;
    cout << endl;
}
