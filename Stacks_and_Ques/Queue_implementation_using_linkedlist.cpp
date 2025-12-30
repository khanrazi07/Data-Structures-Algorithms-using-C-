#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*  next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};


class Que{
    private:
        Node* start = nullptr;
        Node* end = nullptr;
        int currsize = 0;

    public:
        void push(int n){
            Node* temp = new Node(n);
            if(start == nullptr){
                start = end = temp;
            }
            else{
                end->next = temp;
                end = temp;

            }
            currsize += 1;
        }
        int pop(){
            if(start == nullptr){
                cout<<"The queue is Empty"<<endl;
                return -1;
            }
            int val = start->data;
            Node* temp = start;
            start = start->next;
            delete temp;
            currsize -= 1;
            return val;
        }
        int size(){
            if(start == nullptr){
                 cout<<"The queue is empty"<<endl;
                 return -1;
            }
            return currsize;
        }
        int top(){
            if(start == nullptr){
                return -1;
            }
            return start->data;
        }
};


int main(){
    Que queue;
    queue.push(10);
    queue.push(40);
    queue.push(30);
    queue.push(110);
    queue.pop();
    queue.pop();
    cout<<"The size of queue"<<" "<<queue.size()<<endl;
    cout<<"The Top element is "<< " "<<queue.top()<<endl;


}