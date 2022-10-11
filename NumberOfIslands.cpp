class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=1;
        for(int i=1; i<grid.size()-1; i++)
        {
            for(int j=1; j<grid[0].size()-1; j++)
            {
              if(grid[i][j]=='1')
              {
                  if(i==1)
                  {
                     if(grid[i+1][j]=='0'&&grid[i-1][j]=='0'&&grid[i][j+1]=='0'&&grid[i][j-1]=='0')
                  {
                      ans++;
                      cout<<i<<j;
                  }  
                  }
                  else if(grid[i+1][j]=='0'&&grid[i-1][j]=='0'&&grid[i][j+1]=='0'&&grid[i][j-1]=='0')
                  {
                      ans++;
                      cout<<i<<j;
                  }
              }
            }
        }
        
        return ans;
    }
};


