#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>> visited, vector<vector<int>> maze, int n){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && maze[x][y]==1)
    return true;
    else
    return false;   
}

void solve(vector<vector<int>> maze, int n, vector<string>& ans, int x, int y, vector<vector<int>> visited, string path){
    //base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;

    //we have 4 choices : down, left, right, up

    //down
    int newx = x+1;
    int newy = y;
    if(isSafe(newx, newy, visited, maze, n)){
        path.push_back('D');
        solve(maze, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    //left
    newx = x;
    newy = y-1;
    if(isSafe(newx, newy, visited, maze, n)){
        path.push_back('L');
        solve(maze, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    //right
    newx = x;
    newy = y+1;
    if(isSafe(newx, newy, visited, maze, n)){
        path.push_back('R');
        solve(maze, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    //up
    newx = x-1;
    newy = y;
    if(isSafe(newx, newy, visited, maze, n)){
        path.push_back('U');
        solve(maze, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    visited[x][y]=0;
}

vector<string> findPath(vector<vector<int>> maze, int n){
    vector<string> ans;
    if(maze[0][0]==0)
    return ans;
    int srcx=0,srcy=0;
    vector<vector<int>> visited = maze;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }
    string path ="";
    solve(maze, n, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    cout<<"Enter the size of the maze : ";
    int n;
    cin>>n;
    cout<<"Enter the maze in the form of a matrix : "<<endl;
    vector<vector<int>> maze;
    vector<int> tempo;
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>temp;
            tempo.push_back(temp);
        }
        maze.push_back(tempo);
        tempo.clear();
    }
    
    cout<<"Path of the rat can be : "<<endl;
    vector<string> ratPath = findPath(maze, n);
    for(int i=0;i<ratPath.size();i++){
        cout<<ratPath[i]<<"  ";
    }
    cout<<endl;
    return 0;
}