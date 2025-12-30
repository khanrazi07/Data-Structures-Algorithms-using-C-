#include<iostream>
using namespace std;
#include<vector>

void merge(vector<int> &arr , int st , int mid , int end){
    vector<int> temp;
    int i = st , j = mid + 1;
    while(i <= mid && j <= end ){// thi first loop will compare between the two array and merge them togther
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }

    }
    while(i <= mid){// this loop is when the left part of array is already sorted and less the the whole right part
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){// this loop is when the right part is already sorted and greater or less the the left part
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0 ; idx < temp.size() ; idx++){// the final part for adding the whole elemtns in mainn array
        arr[st + idx] = temp[idx];
    }
}

void mergeSort(vector<int> &arr , int st , int end ){
    if(st < end){
        int mid = st + (end - st)/2;
        mergeSort(arr , st , mid);// this recuresive call is for divide the left part of an array recursively
        mergeSort(arr , mid + 1 , end);// this call is for divide the right part of the array recursively
        merge(arr , st , mid , end);// this last part will merge the entire array after the dividation process end


    }
}


int main(){
    vector<int> arr = {32,45,64,7,28,65,6,9,7};
    mergeSort(arr , 0 , arr.size() - 1);
    for(int val : arr){// here is the function which make the array output to the terminal for range 
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;

    
}