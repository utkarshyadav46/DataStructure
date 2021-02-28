/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/


bool iscyclicutil(vector<int>adj[],int v,bool visit[],bool recstack[])
{
    if(visit[v]==false)
    {
     visit[v]=true;
     recstack[v]=true;
     vector<int>::iterator i;
     for(i=adj[v].begin();i!=adj[v].end();i++)
     {
         if(!visit[*i] && iscyclicutil(adj,*i,visit,recstack))
         return true;
         else if(recstack[*i])
         return true;
         
     }
     recstack[v]=false;
     
     return false;
    }
}




bool isCyclic(int V, vector<int> adj[])
{
    bool visit[V]={false};
    bool recstack[V]={false};
    
    for(int i=0;i<V;i++)
    if(iscyclicutil(adj,i,visit,recstack))
    return true;
    
return false;
// Your code here
}
