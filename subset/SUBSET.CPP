vector<vector<int>> subset( vector<int> sub){
	int n = sub.size();
	vector<vector<int>> res;
	vector<int> tmp;
	int index = 0;
	for(int i=0; i< (1<<n); i++){
		for(int j=0; j<n; j++){
			if(i & (1<<j){
				tmp.push_back(sub[j])
			}
		}
		res.push_back(tmp);
		tmp.clear();
	}
	return res;
}

