class Solution {
public:
    bool judgeSquareSum(int c) {
    int st=0;
    int end=sqrt(c);
    
    while(st<=end){
        long long t=(long long)st*st+(long long) end*end;
        if(t==c){
            return true;
        }
        else if(t<c){
            st++;
        }
        else{
            end--;
        }
    }  

    return false;  
    }
};