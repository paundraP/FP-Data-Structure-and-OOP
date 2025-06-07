// this is the header file to manage the student itself.
// it separate from the studnet.h for the clearly logical reason
#include "student.h"
#include <vector>

// declaration of the Student Management class
class StudentManager {
private:
    vector<Student> students;
public:
    // function to load all students on the database
    void loadStudents(const string &filename);
    // function to register a new student to the portal
    void registerStudent();
    // function to login for student to the portal
    void loginStudent();
    // function to find the student by their id
    Student* findStudentByID(const string& id);
};
