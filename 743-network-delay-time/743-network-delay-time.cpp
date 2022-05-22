class Solution {
public:
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<int>>adj[n+1];
        int ts=times.size();
        for(int i=0;i<ts;i++){
            vector<int>vec(2);
            vec[0]=times[i][1];
            vec[1]=times[i][2];
            adj[times[i][0]].push_back(vec);
        }
       
        vector<int>dista(101,INT_MAX);
        //dista[0]=0;
        dista[k]=0;
        queue<int>q;
        q.push(k);
        while(!q.empty()){
            int s=q.front();
            //cout<<s<<" "<<adj[s].size()<<" \n";
            q.pop();
            for(int i=0;i<adj[s].size();i++){
                if(dista[adj[s][i][0]]>adj[s][i][1]+dista[s]){
                    dista[adj[s][i][0]]=adj[s][i][1]+dista[s];
                    q.push(adj[s][i][0]);
                }
            }
            
        }
        int y=*max_element(dista.begin()+1,dista.begin()+n+1);
        if(y==INT_MAX){
            return -1;
        }
        return y;
        
    }
};