// this is header file for the student
#include <string>
#include <vector>
#include <stack>
using namespace std;

class CourseManager;

// declaration of the student class
class Student {
    private:
    string id, name, phoneNumber,department,faculty;
    vector<pair<string, char>> courses; // this will hold the course id and the grade student got. the default is K, which means the student is undergoing the course
    stack<string> dropCourseHistory; // this will hold the history for the course the user's drops 
    vector<float> gradePerSemester; // this will hold the grade student got per semester
    float grades; // the current student grades
    int semester; // the current semester
    public:

    // function to show the student information
    void showMe();
    // function assign the course to the student
    void takeCourse(const string &course, CourseManager &manager);
    // function to drop against the course the student is taking now
    void dropCourse(string &course);
    // function to undo or re join the course the user already dropped
    void undoDropCourse();
    // function to view all the course that student already finish or is taking now
    void viewCourse();
    // function to show the grade both for per semester or the current grade
    void viewGrades();
    // function to view schedule for a week
    void viewSchedule();
};