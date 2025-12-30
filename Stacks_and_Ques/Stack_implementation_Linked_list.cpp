#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }

};

class Stacking{
    private:
        Node* head;
        int StackSize = 0;

    public:
        void push(int n){
            Node* newNode = new Node(n);
            newNode->next = head;
            head = newNode;
            StackSize++;
        }
        int pop(){
            if(head == nullptr){ 
                cout<<"The stack is empty"<<endl;
                return -1;
            }
            int val = head->data;
            Node* temp = head;
            head = head->next;
            delete temp;
            StackSize--;
            return val;
        }
        int size(){
            return StackSize;
        }
        int top(){
            if(head == nullptr){
                cout<<"The stack is empty"<<endl;
                return -1;
            }
            return head->data;
        }


};

int main(){
    Stacking st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;

    st.pop();
    cout << "Top after pop: " << st.top() << endl;

    cout << "Size: " << st.size() << endl;

}