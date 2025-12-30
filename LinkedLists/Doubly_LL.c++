#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1 , Node* next1 , Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;

    }
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

};
Node* Convert_to_DLL(vector<int>  arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1 ; i < arr.size(); i++){
        Node* temp = new Node(arr[i] , nullptr , prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void Print(Node* head){
    while(head  != NULL){
        cout<< head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* back = head;
    head = head->next;

    head->prev = nullptr;
    back->next = nullptr;

    delete back;
    return head;


}

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        delete head;
        return NULL;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* prevNode = temp->prev;
    prevNode->next = nullptr;
    temp->prev = nullptr;

    delete temp;
    return head;
}

Node* deleteKth(Node* head ,int k){
    if(head == NULL) return NULL;
    int cnt = 0 ; 
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node*  back = temp->prev;
    Node* front = temp->next;
    
    if(back == NULL && front == NULL){
        return NULL;
    }
    else if(front == NULL){
        return deleteTail(head);
    }
    else if(back == NULL){
        return deleteHead(head);
    }
    back->next = front;
    front->prev = back;
    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;

}
void deleteNode(Node* temp){
    Node* back = temp->prev;
    Node* front = temp->next;
    
    if(front == NULL){
        back->next = nullptr;
        temp->prev = nullptr;
        delete temp;

    }
    back->next = front;
    front->prev = back;
    
    temp->next = temp->prev = nullptr;
    delete temp;
}

Node* InsertBeforeHead(Node* head , int val){
    Node* newHead = new Node(val , head , nullptr);
    head->prev = newHead;
    return newHead;
}
Node* InsertBeforeTail(Node* head , int val){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* back = temp->prev;
    Node* insertion = new Node(val , temp , back );
    back->next = insertion;
    temp->prev = insertion;
    return head;
}
Node* InsertBeforeK(Node* head , int k , int val){
    if(k == 1){
        return InsertBeforeHead(head , k);
    } 
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* backNode = temp->prev;
    Node* newNode = new Node(val , temp , backNode);
    backNode->next = newNode;
    temp->prev = newNode;
    return head;


}
int main(){
    vector<int>  arr = {24,54,23,12,43,54,32};
    Node* head = Convert_to_DLL(arr);
    Print(head);
    head = InsertBeforeK(head ,4 , 339900);
    Print(head);


}