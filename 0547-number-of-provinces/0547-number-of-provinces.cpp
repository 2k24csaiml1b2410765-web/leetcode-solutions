class Solution {
public:
void bfs(int node,vector<vector<int>>&isConnected,vector<int>&visited,vector<vector<int>>&AdjList){
    queue<int>qt;
    qt.push(node);
    visited[node]=1;
    while(!qt.empty()){
        int node=qt.front();
        qt.pop();
        for(auto it:AdjList[node]){
            if(!visited[it]){
                qt.push(it);
                visited[it]=1;
            }
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>>AdjList(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isConnected[i][j]==1){
                    AdjList[i].push_back(j);
                }
            }

        }
        int count=0;
        vector<int>visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                bfs(i,isConnected,visited,AdjList);
            }
        }
        return count;

        
    }
};