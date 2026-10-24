class Solution {
public:
// void dfs(vector<vector<int>>&image,int i,int j,int oldColor,int color){
//     int m=image.size();
//     int n=image[0].size();
//     if(i<0 || i>=m ||j<0 ||j>=n){
//         return;
//     }
//     if(image[i][j]!=oldColor){
//         return;
//     }
//     image[i][j]=color;
//     dfs(image,i+1,j,oldColor,color);
//     dfs(image,i-1,j,oldColor,color);
//     dfs(image,i,j+1,oldColor,color);
//     dfs(image,i,j-1,oldColor,color);

// }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // int oldColor=image[sr][sc];

        // if(oldColor==color){
        //     return image;
        // }
        // dfs(image,sr,sc,oldColor,color);
        // return image;
        int m=image.size();
        int n=image[0].size();
        int oldColor=image[sr][sc];
        if(oldColor==color){
            return image;
        }
        queue<pair<int,int>>q;
        q.push({sr,sc});
        image[sr][sc]=color;
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int n1=i+dx[k];
                int n2=j+dy[k];
                if(n1>=0 && n2>=0 && n1<m &&n2<n && image[n1][n2]==oldColor){
                    image[n1][n2]=color;
                    q.push({n1,n2});
                }

            }
        }
        return image;
    }
};