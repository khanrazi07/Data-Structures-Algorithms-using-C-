#include <iostream>
using namespace std;

void printnumbers(int n){// recursive function
    if(n == 1){
        cout<<"1\n";
        return;
    }
    cout<<n<<" ";
    printnumbers(n-1);

}

int main(){
    int n = 5;
    printnumbers(n);
    return 0;

}