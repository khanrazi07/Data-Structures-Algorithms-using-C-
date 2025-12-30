class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            int n = nums.size();
            vector <int> final(n);
            int index = 0;
    
            for(int num : nums){
                if(num < pivot){
                    final[index++] = num;
                    
                }
            } 
            for(int num : nums){
                if(num == pivot){
                    final[index++] = num;
                }
            }
            for(int num : nums){
                if(num > pivot){
                    final[index++] = num;
                }
            }
            return final;   
            
        }
    };