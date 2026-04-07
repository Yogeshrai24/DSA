class DSU {
public:
    vector<int> parent, rankv;

    DSU(int n) {
        parent.resize(n);
        rankv.resize(n,0);
        for(int i=0;i<n;i++) parent[i]=i;
    }

    int find(int x){
        if(parent[x]!=x)
            parent[x]=find(parent[x]);
        return parent[x];
    }

    bool unite(int a,int b){
        a=find(a);
        b=find(b);

        if(a==b) return false;

        if(rankv[a]<rankv[b]) swap(a,b);
        parent[b]=a;

        if(rankv[a]==rankv[b])
            rankv[a]++;

        return true;
    }
};

class Solution {
public:

    bool possible(int n, vector<vector<int>>& edges, int k, int mid){

        DSU dsu(n);
        int used=0;
        int upgrades=0;

        
        for(auto &e:edges){
            int u=e[0], v=e[1], w=e[2], must=e[3];

            if(must){
                if(w < mid) return false;

                if(!dsu.unite(u,v))
                    return false;

                used++;
            }
        }

        vector<vector<int>> optional;

        for(auto &e:edges){
            if(e[3]==0)
                optional.push_back(e);
        }

        sort(optional.begin(), optional.end(),
             [](auto &a, auto &b){ return a[2] > b[2]; });

        for(auto &e:optional){

            int u=e[0], v=e[1], w=e[2];

            if(dsu.find(u)==dsu.find(v)) continue;

            if(w >= mid){
                dsu.unite(u,v);
                used++;
            }
            else if(2*w >= mid && upgrades < k){
                dsu.unite(u,v);
                upgrades++;
                used++;
            }

            if(used == n-1) return true;
        }

        return used == n-1;
    }


    int maxStability(int n, vector<vector<int>>& edges, int k) {

        int lo=1, hi=200000;
        int ans=-1;

        while(lo<=hi){

            int mid=(lo+hi)/2;

            if(possible(n,edges,k,mid)){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }

        return ans;
    }
};