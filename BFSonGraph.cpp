
void bfsutil(int i,bool visit[],vector<int>g[],vector<int>&bfsorder)
{
    if(!visit[i])
    {
        visit[i]=true;
        for(auto it=g[i].begin();it!=g[i].end();it++)
        {
            if(!visit[*it])
            {
                bfsorder.push_back(*it);
            }
        }
    }
    
     for(auto it=g[i].begin();it!=g[i].end();it++)
        {
            if(!visit[*it])
            {
               bfsutil(*it,visit,g,bfsorder);
            }
        }
}


vector <int> bfs(vector<int> g[], int n) {
vector<int>bfsorder;
queue<int>q;
bool visit[n]={false};
visit[0]=true;
q.push(0);
while(!q.empty())
{
    int temp=q.front();
      for( auto it : g[temp])
   {
       if(!visit[it])
       {
           visit[it]=true;
           q.push(it);
       }
   
   }
   q.pop();
   bfsorder.push_back(temp);

    
}


return bfsorder;
    // Your code here
}
