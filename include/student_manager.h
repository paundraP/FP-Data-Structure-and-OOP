#include "student.h"
#include <vector>

class StudentManager {
private:
    vector<Student> students;
public:
    void registerStudent();
    Student* findStudentByID(const string& id);
    void listAllStudents();
};
