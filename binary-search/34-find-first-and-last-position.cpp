class Solution {
public:
    int First(vector<int>& arr, int key) {
        int start=0;
        int end=arr.size()-1;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(arr[mid]==key){
                ans=mid;
                end=mid-1;
            }
            else if(arr[mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    int Last(vector<int>& arr,int key){
        int start=0;
        int end=arr.size()-1;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(arr[mid]==key){
                ans=mid;
                start=mid+1;
            }
            else if(arr[mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& arr,int key){
        vector<int> result(2);
        result[0]=First(arr,key);
        result[1]=Last(arr,key);
        return result;
    }
};