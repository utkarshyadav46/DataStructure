void DFSutil(int i,vector<int>g[],bool visited[],vector<int>&dfsorder)
{
    if(!visited[i])
    {visited[i]=true;
    dfsorder.push_back(i);
}

for(auto it=g[i].begin();it!=g[i].end();it++)
{
    if(!visited[*it])
        DFSutil(*it,g,visited,dfsorder);
}
}

vector <int> dfs(vector<int> g[], int N)
{
    vector <int>dfsorder;
    bool visited[N];
    
    for(int i=0;i<N;i++)
        visited[i]=false;
    
    for(int i=0;i<N;i++)
    {
        if(!visited[i])
        DFSutil(i,g,visited,dfsorder);
    }
    
    return dfsorder; 
    // Your code here

}
