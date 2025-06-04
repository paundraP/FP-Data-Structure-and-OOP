#include <map>
#include <vector>
#include <string>
using namespace std;

class University {
    private: 
    map<string, vector<pair<string, int>>> university_map;
    public:
    void addBuilding(string);
    void connectBuilding(string, int);
    void location(string from, string to);
};