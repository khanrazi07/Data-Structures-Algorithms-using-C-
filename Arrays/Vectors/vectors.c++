#include <iostream>
#include <vector>
using namespace std;

int main (){

    vector <int> v1 ;
    vector <int> vec = {1,2,3,4,5};
    vector <int> vec2 (3,100);
    cout<< vec[0]<<endl; 
    cout<< vec2[2]<<endl; 

    // for each loop which  not iterate the indexed value but give the value on the given index for all of the vector
    vector <int> demo = {12,43,5,3,6,3,6,2,23,5};
    vector <char> demo2 = {'a', 'b' , 'v' , 'd'};
    /*for (int val : demo){
        cout<<val<<endl;
    }
    for (char val2 : demo2){
        cout<<val2;
    }
    */
    cout<<"Size : "<< demo2.size()<<endl;// thats the first duntion which return the size of an vector
    // second one is the (push back ) push back function adds the value at the last of the vector
    // now pop back is the function which delete the last element in the vector 
    demo.push_back(786);
    demo.pop_back();
    cout<<demo2.front()<<endl;
    cout<<demo.back()<<endl;
    cout<<demo.at(4) << endl; 
    // so we know thtat the vector have two properties that are 1st ine vector have the size and second one is that vector have the capacity
    // so we hav an empty array lets prove that
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(8);
    cout<<"size of the vector V1 : "<< v1.size()<<endl;
    cout<<"Capacity of the vector V1 : "<< v1.capacity()<<endl;
    cout<<"hence proved that the size of the vector V1 is 3 and the capaccity of the vector v1 is 4"<<endl;
    


}
