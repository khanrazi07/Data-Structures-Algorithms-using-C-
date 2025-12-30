#include<iostream>
using namespace std;
#include<vector>

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;

    }
};

Node* converetArrtoLL(vector<int> &arr){
    Node* head = new Node(arr[0] , nullptr);
    Node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i] , nullptr);
        mover-> next = temp;
        mover = temp;
    }
    return head;
}
int lengthofLL(Node* head){
    int cnt = 0 ;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;

}
int checkifPresent(Node* head , int val){
    Node* temp = head;
    while(temp){
        temp = temp->next;
        if(val == temp->data){
            return true;
        }
    }
    return false;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<< " ";
        head = head->next;
    }
    cout<<endl;
}

Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    free(temp); // we can also use delete(temp)
    return head;
}

Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}
// Deleting the kth element
Node* RemoveK(Node* head , int k){
    if(head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0 ;
    Node* temp = head;
    Node* prev = NULL;
    while(temp->next != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;

}

Node* removeValue(Node* head , int val){
    if(head == NULL) return head;
    if(head->data == val){
        Node* crr = head;
        head = head->next;
        free(crr);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == val){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node* insertionHead(Node* head , int val){
    Node* temp = new Node(val , head);
    return temp;
}

Node* insertatTail(Node* head , int val){
    if(head == NULL){
        return new Node(val ,head);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val , nullptr);
    temp->next = newNode;
    return head;
}

Node* insertPosition(Node* head , int val , int place){
    if(head == NULL){
        if(place == 1){
            return new Node(val , head);
        }
    }
    if(place == 1){
        Node* temp = new Node(val , head);
        return temp;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == place - 1){
            Node* x = new Node(val , temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
Node* insertValue(Node* head , int val , int k){
    if(head == NULL){
        return NULL;
    }
    if(head->data == k){
        return new Node(val , head);
    }
    Node* temp = head;
    while(temp != NULL){
        if(temp->next->data == k){
            Node* x = new Node(val , temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}



int main(){
    vector<int>  arr = {2,4,6,8};
    Node* head = converetArrtoLL(arr);
    head = insertValue(head , 20 , 6);
    print(head);
}