bool isValid(vector <int> arr , int n , int m , int mid){
    int student = 1;
    int pages = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > mid){
            return false;
        }
        else if(pages + arr[i] <= mid){
            pages += arr[i];

        }
        else{
            student ++;
            pages = arr[i];
        }

    }
    if(student > mid){
        return false;
    }
    else{
        return true;
    }
}




int findPages(vector<int>& arr, int n, int m) {
    int sumofpages = 0;
    for( int sum : arr){
        sumofpages += sum;
    }

    int start = 0;
    int end = sumofpages - 1 ;
    int answer = 0;

    int mid = start + (end - start)/2;

    while(start < end){
        if(isValid(arr)){
            answer = mid;
            end = mid -1 ;
        }
        else{
            start = mid + 1;
        }
    }


    // Write your code here.
    
}