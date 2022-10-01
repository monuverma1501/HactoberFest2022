#include<bits/stdc++.h>
using namespace std;


void visited(int i,int j,vector<vector<int>>& grid,int r,int c,int &count)
    {
        if(i>=r ||i<0 ||j>=c ||j<0 ||grid[i][j]==0 ) return ;
        grid[i][j]=0;
        count++;
        
        visited(i+1,j+1,grid,r,c,count);
        visited(i-1,j+1,grid,r,c,count);
        visited(i+1,j-1,grid,r,c,count);
        visited(i-1,j-1,grid,r,c,count);
        visited(i,j-1,grid,r,c,count);
        visited(i,j+1,grid,r,c,count);
        visited(i-1,j,grid,r,c,count);
        visited(i+1,j,grid,r,c,count);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        int max=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    visited(i,j,grid,r,c,count);
                    if(count>max)
                        max=count;
                     count=0;
                }
            }
        }
        return max;
}


int main()
{	
	int m,n;cin>>m>>n;
    vector<vector<int>> grid(m, vector<int> (n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        	int x;
        	cin>>x;
            grid[i][j]=x;
        }
    }
    cout<<maxAreaOfIsland(grid);
}
