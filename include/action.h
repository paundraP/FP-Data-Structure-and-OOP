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
