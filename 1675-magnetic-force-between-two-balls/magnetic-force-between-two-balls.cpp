class Solution {
public:
    int fun(vector<int>& position,int n ,int m, int guess){
        int ball = 1;
        int prev = position[0];
        for(int i=1;i<n;i++){
            int dist= position[i]-prev;
            if(dist<guess){
                continue;
            }else{
                ball++;
                prev=position[i];
            }
        }
            if(ball>=m) return true;
            else return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());
        int low=1,high=position[n-1]-position[0];
        int res= -1;
        while(low<=high){
            int guess= (low+high)/2;
            if(fun(position,n,m,guess)){
                res=guess;
                low=guess+1;
            }else{
                high=guess-1;
            }
        }
            return res;
    }
};