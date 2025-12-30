#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<queue>
#include<stack>
using namespace std;


int main(){
    //VECTORS
    vector<int> vect = {1,4,5,6,2};
    vect.pop_back();
    vect.push_back(6);
    //vect.emplace(7);
    for(int num : vect){
        cout<<num<<" ";
    }
    cout<<endl;
    

    // list
    list <int> li = {1,2,3,4};
    li.pop_back();
    li.push_back(7);
    for(int num1: li){
        cout<<num1<<" ";
    }
    cout<<endl;

    //Deque
    deque<int> DQ = {1,4,5,6,3};
    cout<<DQ[3]<<endl;
    DQ.pop_back();
    DQ.push_back(7);
    for(int num2: li){
        cout<<num2<<" ";
    }
    cout<<endl;

    //Pair function 
    pair <int , char> p1 = {1,'y'};// hence we can only make pair of two elements
    cout<<p1.first<<endl;
    pair <int ,  pair <int , char>> ps = {5 ,{1 , 'y'}};
    cout<<ps.second.second<<endl;
    
    // Stack
    // here comesss the paaaainnnnnnn
    stack <int> st ;
    st.push(1);
    st.push(7);
    st.push(3);
    st.push(4);
    //cout<<"top"<<st.top()<<endl;
    // return 0;
    while(!st.empty()){
        cout<<"Top :" << st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
    
    // Queue (FIFO)

    queue<int> Q;
    Q.push(1);
    Q.push(5);
    Q.push(2);
    Q.push(8);
    //cout<<"top"<<st.top()<<endl;
    // return 0;
    while(!Q.empty()){
        cout<< Q.front()<<" ";
        Q.pop();
    }
    cout<<endl;
    return 0;

}