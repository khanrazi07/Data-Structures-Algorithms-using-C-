#include<iostream>
using namespace std;
#include<vector>
#include<string>

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};

class LinkedList{
    
    Node* head;
    Node* tail;
    

public:
    LinkedList(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;

        }
        

    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            tail->next = newNode;
            newNode = tail;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"LinkedList is Empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
        if (head == NULL) {
            cout << "Linked List is Empty" << endl;
            return;
        }
    
        // Edge case: Only one node
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
    
        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
    
        delete tail;
        temp->next = NULL;
        tail = temp;
    }

    void Insert(int val , int pos){
        if(pos == 0){
            push_front(val);
            return;
        }
        // else if(pos == size()){
        //     push_back(val);
        //     return;
        // }
        if(pos < 0){
            cout<<"Invalid Insertion";
            return;
        }
        Node* temp = head;
        for(int i = 0 ; i < pos-1 ; i++ ){
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    int Search(int val){
        Node* temp = head;
        int idx = 0 ;
        while(temp != NULL){
            if( temp->data == val){
                // cout<<temp<<"Hell yeah Found it"<<endl;
                return idx; 
            }
            temp = temp->next;
            idx++;
        }
    }

    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp->data <<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;

    }
};


int main(){

    LinkedList l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_back(4);
    // l1.pop_front();
    l1.Insert(67,2);
    cout<<endl;
    // l1.pop_back();
    cout<<l1.Search(1);
    l1.printLL();
    
}