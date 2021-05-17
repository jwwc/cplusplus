vector<vector<int>> conset(vector<int> nums){
	vector<vector<int>> res;
	vector<int> tmp;
	int n = nums.size();
	for(int i=1; i<n; i++){
		for(int left=0; left<n; left++){
			while(left < left+i){
				tmp.push_back(nums[left]);
			}
			res.push_back(tmp);
			tmp.clear()
		}
	}
	return res;
}
