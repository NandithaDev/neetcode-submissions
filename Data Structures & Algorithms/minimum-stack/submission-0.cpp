#include <stack>
using namespace std;

class MinStack {
private:
    stack<int> st;
    stack<int> minst;

public:
    MinStack() {}

    void push(int val) {
        st.push(val);

        if (minst.empty()) {
            minst.push(val);
        } else {
            int curr_min = minst.top();
            if (val <= curr_min)
                minst.push(val);
            else
                minst.push(curr_min);
        }
    }

    void pop() {
        st.pop();
        minst.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minst.top();
    }
};