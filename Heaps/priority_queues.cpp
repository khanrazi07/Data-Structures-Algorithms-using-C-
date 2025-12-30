#include<queue>
#include<vector>
#include<iostream>
using namespace std;


int main(){
    priority_queue<int> pq; // this is a MAX Heap by default
    pq.push(100);
    pq.push(200);
    pq.push(23);
    pq.push(34);
    pq.push(1000);

    cout<<pq.top()<<endl;



}