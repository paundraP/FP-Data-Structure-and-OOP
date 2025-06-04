#include <string>
#include <vector>
#include <stack>
using namespace std;

class Student {
    private:
    string id, name, phoneNumber,department,faculty;
    vector<pair<string, int>> courses;
    stack<string> dropCourseHistory;
    vector<float> gradePerSemester;
    vector<float> gradePerCourses;
    float grades;
    public:
    void addCourse(string course);
    void dropCourse(string course);
    void undoDropCourse();
    void viewCourse();
    void viewGrades();
};