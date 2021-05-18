vector<vector<int>>permute(vector<int> nums)
{
	int n = nums.size();
	vector<vector<int>> res;
	vector<int> tmp;
	vector<bool> used(n,false);
	if(n == 0){
		return {{}};
	}
	dfs(nums,n,0,tmp,used,res);
	return res;
}
void dfs(vector<int> nums,int len, int depth,vector<int> &tmp,vector<bool> &used, vector<vector<int>> &res)
{
	if(depth == len){
		res.push_back(tmp);
		return;
	}
	for(int i=0; i<len; i++)
	{
		if(used[i])
		{
			continue;
		}
		tmp.push_back(nums[i]);
		used[i] = true;
		dfs(nums,len,depth+1,tmp,used,res);
		tmp.pop();
		used[i]= false;
	}
}



