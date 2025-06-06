#include <iostream>
#include <student.h>
#include "course_manager.h"
using namespace std;

// the implementation of adding the course to the student
void Student::takeCourse(const string &courseID, CourseManager &manager) {
    Course* course = manager.getCourseByID(courseID);
    if (course == nullptr) {
        cout << "Course " << course << " does not exist." << endl;
        return;
    }
    // checking whether the course is already in the student course list using for each.
    for(const auto &c: courses) {
        // if the course is in the courses list, thats mean that the course the user want to add is already on the list
        if(c.first == courseID) {
            cout << "Course" << course << " already added" << endl;
            return;
        }
    }

    // Default course grade is K that means the course is ongoing
    courses.push_back(make_pair(courseID, 'K'));
    cout << "Course " << course << " has been added." << endl;
}