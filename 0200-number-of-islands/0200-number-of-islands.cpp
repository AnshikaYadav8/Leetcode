class Solution {
public:
    void elim(int x, int y, vector<vector<char>>& grid){

        queue<pair<int,int>> q;
        pair<int,int> p1 = make_pair(x,y);
        q.push(p1);
        while(!q.empty()){
        x = q.front().first;
        y= q.front().second;
        q.pop();
        grid[x][y] = '8';
        if(x-1 >= 0  && grid[x-1][y]=='1'){
            q.push(make_pair(x-1,y));
            grid[x - 1][y] = '8';
        }
        if(x+1 < grid.size()  && grid[x+1][y]=='1'){
            q.push(make_pair(x+1,y));
            grid[x + 1][y] = '8';
        }
        if(y-1 >= 0  && grid[x][y-1]=='1'){
            q.push(make_pair(x,y-1));
            grid[x][y-1] = '8';
        }
        if(y+1 < grid[0].size()  && grid[x][y+1]=='1'){
            q.push(make_pair(x,y+1));
            grid[x][y+1] = '8';
        }

        //pair<int,int> p2 = q.front();
        //q.pop();
        //grid[p2.first][p2.second] = '8';
      
        }
    }

    int numIslands(vector<vector<char>>& grid) {
    int numOfIsland = 0;
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
            if(grid[i][j]=='1'){
                elim(i,j,grid);
                numOfIsland +=1;
            }
        }
    }
    return numOfIsland;
    }
};