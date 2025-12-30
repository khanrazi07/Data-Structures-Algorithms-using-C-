#include<iostream>
#include <set>
using namespace std;
int main(){
    set<int> st;
    st.insert(1);
    st.insert(1);
    st.insert(8);
    st.insert(2);
    st.insert(5);
    st.insert(4);
    
    cout<<"lower bound : " << *(st.lower_bound(3));
    cout<<endl;
    cout<<"upper bound : " << *(st.upper_bound(1));
    cout<<endl;
    for(auto num : st){
        cout<<num<<" ";
    }
    cout<<endl;
}