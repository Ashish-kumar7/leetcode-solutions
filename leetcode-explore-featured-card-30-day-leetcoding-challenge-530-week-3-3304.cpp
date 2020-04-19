class Solution {
public:
    
    int search1(vector<int>nums,int s,int e,int key){
        if(s>e){
            return -1;
        }
         int mid=(s+e)/2;
        if(key==nums[mid]){
            return mid;
        }
        if(nums[s]<= nums[mid]){
            if(key<=nums[mid] && key>=nums[s]){
              return  search1(nums,s,mid-1,key);
            }
            else {
              return   search1(nums,mid+1,e,key);
            }
        }
        if(key>=nums[mid] && key<=nums[e]){
           return  search1(nums,mid+1,e,key);
        }
        return search1(nums,s,mid-1,key);
    }
    int search(vector<int>& nums, int target) {
     
        int n=nums.size();
        int y=search1(nums,0,n-1,target);
        return y;   
    }
};