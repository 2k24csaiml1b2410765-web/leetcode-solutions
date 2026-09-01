class Solution {
public:
int binarySearch(vector<int>&arr,int tar,int st,int end){
    int n=arr.size();
        while(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid]==tar){
                return mid;
            }
            else if(arr[mid]<=tar){
                return binarySearch(arr,tar,mid+1,end);
            } 
            else{
                return binarySearch(arr,tar,st,mid-1);
            }
        } 
        return -1;
}
    int search(vector<int>& arr, int target) {
        return binarySearch(arr,target,0,arr.size()-1);

    }
};