class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<vector<int>>res;
    vector<vector<int>>fres;
    int n=intervals.size();
    bool insert = false;
    for(int i=0;i<n;i++){
        int start=intervals[i][0];
        if(start>=newInterval[0] && insert==false){
            res.push_back(newInterval);
            insert = true;
        }
        res.push_back(intervals[i]);
    }
    if(!insert) res.push_back(newInterval);

    int m = res.size();
    if(res.empty()) return res;
    int start1=res[0][0];
    int end1=res[0][1];
    for(int j=1;j<m;j++){
        int start2=res[j][0];
        int end2=res[j][1];
        if(end1>=start2){
            start1=start1;
            end1=max(end1,end2);
            continue;
        }
        fres.push_back({start1,end1});
        start1=start2;
        end1=end2;
    }
    fres.push_back({start1,end1});
    return fres;
    }
};