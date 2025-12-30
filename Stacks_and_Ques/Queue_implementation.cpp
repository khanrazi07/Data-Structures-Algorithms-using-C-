#include<iostream>
using namespace std;

class Q{
    private:
        int Queuesize = 10;
        int queue[10];
        int currsize = 0;
        int end = -1 ,start = -1;
    public:
        void push(int n){
            if(currsize == Queuesize) cout<<"The Queue is Full"<<endl;
            if(currsize == 0){
                start = 0 , end = 0;
            }
            else{
                end = (end + 1)% Queuesize;
            }
            queue[end] = n , currsize += 1;
        }
        int pop(){
            if(currsize == 0) cout<<"The Queue is Empty"<<endl;
            int element = queue[start];
            if(currsize == 1){
                start = -1 , end = -1;
            }
            else{
                start = (start+1)%Queuesize;
            }
            currsize -= 1;
            return element;
        }
        int top(){
            if(currsize == 0){
                cout<<"The Queue is Empty"<<endl;
                return -1;
            }
            return queue[start];
        }
        int size(){
            if(currsize == -1){
                cout<<"The Queue is Empty"<<endl;
                return -1;

            } 

            return currsize;
        }

};



int main(){
    Q queue;
    queue.push(10);
    queue.push(100);
    queue.push(20);
    queue.push(111);
    queue.top();
    queue.pop();
    queue.pop();
    queue.push(10);
    queue.pop();
    cout<<"Size of THe Queue"<<queue.size()<<endl;
    cout<<"Top ELement in queue"<<queue.top()<<endl;

}