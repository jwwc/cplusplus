vector<vector<int>> permute(vector<int>& nums) {
    queue<vector<int>> q;
    int len = nums.size();
    vector<vector<int>> res;
    for(int i=0; i<len; i++){
        q.push({nums[i]});
    }
    while(!q.empty()){
        auto temp = q.front();
        q.pop();
        if(temp.size() == len){
            res.push_back(temp);
        }else{
            for(int i=0; i<len; i++){
            if(find(temp.begin(),temp.end(),nums[i]) == temp.end()){
                auto cp = temp;
                cp.push_back(nums[i]);
                q.push(cp);
            }
        }
        }
    }
    return res;
}
