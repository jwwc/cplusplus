int sum_sub_interval(vector<vector<int>> vec){
    int len = vec.size();
    vector<int> dp(len, 0);
    sort(vec.begin(),vec.end(),cmp);
    for(int i=0; i<len; i++){
        dp[i] = vec[i][2];
        for(int j=0; j<i; j++){
            if(compare(vec[j],vec[i])){
                dp[i] = max(dp[i],dp[j]+vec[i][2]);
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
}
bool compare(vector<int> a, vector<int> b){
	if(a[1]<=b[0]){
		return true;
	}else{
		return false;
	}
}

