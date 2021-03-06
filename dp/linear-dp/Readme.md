# 什么是线性dp:
线性动态规划问题的主要问题有：单串，双串，矩阵上的问题，因为在单串，双串，矩阵问题上规模完全可以用位置表示，并且位置的大小就是问题规模的大小，因此可以从前往后推位置就相当于从小到大推问题规模。
## 主要的分类：单串，双串，矩阵
### 最长递增子序列
给你一个数组nums,找到其中严格递增子序列的长度，子序列是由数组派生而来的序列，删除(或不删除)数组中的元素而不改变其余数组的顺序，例如[3,6,2,7]是数组[0,3,1,6,2,2,7]的子序列
#### 示例：
**输入:** nums = [10,9,2,5,3,7,101,18]

**输出:** 4

**解释:** 最长递增子序列是[2,3,7,101],因此长度是4.

首先我们要能够读懂这个题，确定该题可以用动态规划去解决
每一个阶段对应的决策只有两种：即判断当前的数值是否存在于当前的最长递增子序列中

定义一个dp数组，dp[i]表示以第i个数字结尾的最长升序序列的长度，注意nums[i]必须选取,在计算dp[i]之前，我们已经计算出dp[0,1,...i-1]的值，则状态转移方程为

dp[i] = max(dp[j])+1 其中 0<= j< i且 num[j] < num[i]

则length = max(dp[i]) 其中 0<= i< n

源码在[LIS.cpp](https://github.com/jwwc/cplusplus/tree/main/dp/linear-dp/LIS.cpp)

### 最长子区间和：

在给定的二维数组中，找出最长的子区间和

#### 示例：

**输入:** [[1,3,200],[2,4,150],[3,5,180],[3,6,210]]

**输出:** 410

**解释:** 1->3  + 3->6 = 410

#### 解题思路

本题和最长递增子序列具有相同的解题思路，是一个动态规划问题

首先对二维数组进行排序，排序的方式是按照区间右值递增排序(因为这样排序之后，方便判断区组的数组大小）


定义一个dp数组，dp[i]表示:到第i个子区间最大区间和(第i个子区间已经选择),在计算dp[i]之前，我们已经dp[0,1,... i-1]的值

状态转移方程：dp[i] = max(dp[i],dp[j]+val) 其中 j<i 且 子区间j和子区间i没有交集

源码在[MSS.cp](https://github.com/jwwc/cplusplus/tree/main/dp/linear-dp/MSS.cpp)


