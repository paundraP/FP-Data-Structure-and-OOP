// this is header file for the university map
#include <map>
#include <vector>
#include <string>
using namespace std;

// declaration of the university map class
class University {
    private:
    // adjacency list, to represent multiple edges from each building
    map<string, vector<pair<string, int>>> university_map;
    public:
    // function to add the new building in the university
    void addBuilding(string);
    // function to connect the building to another
    void connectBuilding(string, int);
    // function to find the path for the building to another
    void findPath(string from, string to);
};