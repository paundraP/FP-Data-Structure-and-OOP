#include "course.h"
#include <map>

class CourseManager {
private:
    map<string, Course> courseMap;
public:
    void addCourse(const Course& course);
    Course* getCourseByID(const string& id);
    void listAllCourses();
};
