class Solution {
    struct cmp{
        bool operator()(const pair<int,int>&a,const pair<int,int>&b){
            if(a.first!=b.first){
                return a.first<b.first;
            }else{
                return a.second<b.second;
            }
        }
    };
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<vector<int>>res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
        for(int i = 0 ; i <n ; i++){
            int r = (points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
            int dist=r;
            int index=i;
            pair<int,int>curr={dist,index};
            if(pq.size()<k){
                pq.push(curr);
                continue;
            }
            if(curr.first>pq.top().first){
                continue;
            }else{
                pq.pop();
                pq.push(curr);
            }
        }
        while(!pq.empty()){
            res.push_back(points[pq.top().second]);
            pq.pop();
        }
        return res;
    }
};