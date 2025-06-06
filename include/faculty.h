// this is the faculty header file.
// to declaring and implementing the logic for the faculty
#include <string>
#include <vector>
using namespace std;

// declaration of Department class
class Department {
    public:
    string id, name;
};

// declaration of Faculty class
class Faculty {
    public:
    string id, name;
    vector<Department> departments;

    // function to display the hierarchy of the faculty (the department inside it) 
    void displays();
};