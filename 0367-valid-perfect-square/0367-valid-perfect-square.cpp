class Solution {
public:
    bool isPerfectSquare(int num) {
        int st=0;
        int end=num;
        while(st<=end){
            long long int mid=st+(end-st)/2;
            if(mid*mid==num){
               
                 return true;
    
                
            }
            if(mid*mid<num){
                st=mid+1;
                
            }
            else{
                end=mid-1;
            }
           
        }
        return false;
    }
};