#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>& nums , int n , int i){
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if(left  < n && nums[left] > nums[largest]) largest = left;
    if(right < n && nums[right] > nums[largest]) largest = right;
    if(largest != i){
        swap(nums[largest] , nums[i]);
        heapify(nums , n , largest);
    }
}


class Heap{
    public:
        vector<int> heap;
        Heap(){
            heap.push_back(0);
        }

        //Insertion Function
        void insertion(int x){
            heap.push_back(x);
            int pos = heap.size() - 1;
            while(pos > 1){
                int parent = pos/2;
                if(heap[pos] > heap[parent]){
                    swap(heap[pos] , heap[parent]);
                    pos = parent;
                }
                else{
                    break;
                }
            }
        }
        // Deletion Processs
        void deletion(){
            if(heap.size() <= 1){
                cout<<"Nothing have to Delete here"<<endl;
                return;
            }
            heap[1] = heap[heap.size() - 1];
            heap.pop_back();
            int pos = 1;
            while(2*pos < heap.size()){
                int left = 2 * pos;
                int right = 2 * pos + 1;
                int large = pos;
                if(left < heap.size() && heap[left] > heap[pos]){
                    large = left;
                }
                if(right < heap.size() && heap[right] > heap[pos]){
                    large = right;
                }
                if(large != pos){
                    swap(heap[large] , heap[pos]);
                    pos = large;
                } else{
                    break;
                }
            }

        }
        // Printing function 
        void print(){
            for(int i = 1 ; i < heap.size() ; i++){
                cout<<heap[i]<<" ";
            }
            cout<<endl;

        }



};
int main(){
    Heap h;
    h.insertion(100);
    h.insertion(80);
    h.insertion(70);
    h.insertion(200);
    h.insertion(15);
    h.insertion(150);
    h.deletion();
    h.print();

}