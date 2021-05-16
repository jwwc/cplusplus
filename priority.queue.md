# 优先级队列的用法

## 升序队列 priority_queue<int, vector<int>, greater<int>> q;

## 降序队列 priority_queue<int, vector<int>, less<int>> q;

优先级队列的头文件queue

升序队列相对于降序队列需要加一个functional文件

## 自定义优先级队列

### 重写仿函数

struct cmp
{
	bool operator()(vector<int> a, vector<int> b)
	{
		return a[1] > b[1];( 大顶堆 ) // 升序
	}
}

基本操作：
	top 访问对头元素
	empty 队列为空
	size 队列元素大小
	push 插入元素到队尾
	emplace 原地构造元素插入队列
	pop 弹出对头元素
	swap 交换内容



