#include<bits/stdc++.h>
using namespace std;
void f(vector<vector<int>>& grid,int i,int j){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
        return; 
    }
    if(grid[i][j]==0){
        return;
    }
    grid[i][j]=0;
    f(grid,i+1,j);
    f(grid,i-1,j);
    f(grid,i,j+1);
    f(grid,i,j-1);

}
void test(int tc){
//cout<<"Case #"<<tc<<":  ";
//input 
int n;
cin>>n;
//int m[n][n];
vector<vector<int>> m(n,vector<int>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>m[i][j];
    }
}
//solution

int count=0;
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                if(m[i][j]==1){
                    f(m,i,j);
                    count++;
                }
            }
        }
cout<< count;
cout<<endl;
}
int main() {
int testcase;
cin>>testcase;
for (int tc = 1; tc <=testcase; tc++)
{
test(tc);
}
//cout<<flush;
return 0;
}

