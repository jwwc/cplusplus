### vector sort 自定义排序

sort(vec.begin(),vec.end(),cmp)

### 定义cmp

bool cmp(vector<int> a, vector<int> b)
{
	if( a[1] < b[1]){
		return ture; // 升序排序
	}else{
		return false;
	}
}


