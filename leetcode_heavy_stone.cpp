int coll(pair<int , int> p){
    if (p.first == p.second){
        return 0;
    }
    return abs(p.first - p.second);
}

int stone(vector<int>& stones){
    int n = stones.size();    
    if (n==0){
        return 0;
    }
    if (n==1){
            return stones[0];
    }
    sort(stones.begin(),stones.end());
    pair<int,int> p ={stones[n-2] , stones[n-1]};
    int val = coll(p);
    if(val == 0){
        stones.pop_back();
        stones.pop_back();
        return stone(stones);
        }
    else{
        stones.pop_back();
        stones.pop_back();
        stones.push_back(val);
        return stone(stones);
    }
    return 0;
    }
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        return stone(stones);
    }
};