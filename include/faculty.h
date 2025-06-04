#include <string>
#include <vector>
using namespace std;

class Department {
    public: 
    string id, name;
    vector<string> courseCode;
};

class Faculty {
    public:
    string id, name;
    vector<Department> departments;

    void displays();
};