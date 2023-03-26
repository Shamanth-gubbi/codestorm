#include <bits/stdc++.h>
using namespace     std;



int main(){

    int tc;
    cin>>tc;
    while (tc--)
    {
        int n, m;
        cin>>n>>m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>grid[i][j];
            }
        }

        Solution obj;
        int ans=obj.numIslands(grid);
        cout<<ans<<"\n";


    }
    
    return 0;
}