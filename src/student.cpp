#include <iostream>
#include <student.h>
using namespace std;

// the implementation of adding the course to the student
void Student::takeCourse(string course) {
    // checking whether the course is already in the student course list using for each.
    for(const auto &c: courses) {
        // if the course is in the courses list, thats mean that the course the user want to add is already on the list
        if(c.first == course) {
            cout << "Course" << course << " already added" << endl;
            return;
        }
    }

    // Default course grade is K that means the course is ongoing
    courses.push_back(make_pair(course, 'K'));
    cout << "Course " << course << " has been added." << endl;
}