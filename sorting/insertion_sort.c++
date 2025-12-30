#include<iostream>
using namespace std;

void insertion_sort(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        int j = i;
        while( j > 0 && arr[j-1] > arr[j] ){
            swap(arr[j] , arr[j-1]);
            j--;
        }
    }
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout<<"Printing the array"<<endl;
    for(int i = 0 ; i < n ; i++){
        
        cout<<arr[i] << " ";

    }
    cout<<endl;
    // now we do the sorting on the array
    insertion_sort(arr , n);
    cout<<"Printing the array after sorting"<<endl;
    for(int i = 0 ; i < n ; i++){
        
        cout<<arr[i]<< " ";
    }
}