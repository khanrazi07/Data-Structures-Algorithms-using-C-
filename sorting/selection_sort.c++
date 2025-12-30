// selection sort 
// selection sort is a type of sorting technique in which we firstly select the minnimum element and swap it with the first element. Then we select the minimum element from the remaining unsorted array and swap
//lets take an example
#include<iostream>
using namespace std;

void selection_Sort(int arr[], int n){
    for(int i = 0 ; i < n - 2 ; i ++){
        int minIndex = i ;
        for(int j = i ; j < n - 1 ; j ++){
            if(arr[j] < arr[minIndex]){
                minIndex = j ;
            }
        }
        swap(arr[i] , arr[minIndex]);
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
    selection_Sort(arr , n);
    cout<<"Printing the array after sorting"<<endl;
    for(int i = 0 ; i < n ; i++){
        
        cout<<arr[i]<< " ";
    }
}