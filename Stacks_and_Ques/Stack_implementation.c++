#include <iostream>
using namespace std;

class stacking {
private:
    int topIndex;
    int stackArr[10];

public:
    stacking() {
        topIndex = -1;
    }

    void push(int n) {
        if (topIndex >= 9) {
            cout << "Buffer Overflow" << endl;
            return;
        }
        topIndex++;
        stackArr[topIndex] = n;
    }

    void pop() {
        if (topIndex < 0) {
            cout << "There is No element for Popping" << endl;
            return;
        }
        topIndex--;
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack Is Empty" << endl;
            return -1;  // return some error value
        }
        return stackArr[topIndex];
    }

    int size_of_stack() {
        return topIndex + 1;
    }
};

int main() {
    stacking st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;
    cout << "Size: " << st.size_of_stack() << endl;

    st.pop();
    cout << "After pop, Top: " << st.top() << endl;

    return 0;
}
