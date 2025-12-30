#include<iostream>
using namespace std;

void bubble_sort(int arr[] , int n){
    for(int i = n - 1 ; i >= 0 ; i--){
        for(int j = 0 ; j < i  ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
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
    bubble_sort(arr , n);
    cout<<"Printing the array after sorting"<<endl;
    for(int i = 0 ; i < n ; i++){
        
        cout<<arr[i]<< " ";
    }
}