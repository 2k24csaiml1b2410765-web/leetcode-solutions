class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set<int>s;
        sort(candyType.begin(),candyType.end());
        for(int i=0;i<n;i++){
            s.insert(candyType[i]);
        }
        int count=s.size();
        return min((int)count,n/2);
        
        
    }
};