// this is the header file to manage the course
// it separate from the course.h for the clearly logical reason

#include "course.h"
#include <map>

// declaration of the Course Management class
class CourseManager {
private:
    // mapping the course by their id
    map<string, Course> courseMap;
public:
    // function to add the course to the list of course available the student can take
    void addCourse(const Course& course);
    // function to get the detail or spesific course by their id
    Course* getCourseByID(const string& id);
    // function to list all course
    void listAllCourses();
};
