// this is the implementation of a template to manage the action history
// in this case, is to track the course that user's drop
#include <stack>
using namespace std;

template<typename T>
class ActionHistory {
private:
    stack<T> history;
public:
    void push(const T& action);
    T pop();
    bool isEmpty() const;
};
