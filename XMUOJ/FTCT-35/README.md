# 贪心

| 题目链接 | [贪心](http://xmuoj.com/problem/FTCT-35) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p>Starlight遇到了一个棘手的问题，她可以对长度为n的正整数序列做如下操作：</p><p>选择其中任意个数（不能多次选择同一个位置的数），对a[i]做a[i] := a[i] * i的操作，使得变换后的序列的乘积能够整除2^n，并且要使得选中的数的个数最少。</p><p>她无法解决这个问题，于是向聪明的你求助。</p><p><br /></p><p>出题人为刘梦茵同学<br /></p>

## 输入

<p>第一行为正整数n，代表正整数序列的长度（1 &lt;= n &lt;= 200000）；</p><p>第二行为n个正整数a[i]（1 &lt;= a[i] &lt;= 10^9）</p>

## 输出

<p>最少选择的数的个数。若无论怎样选择都无法整除2^n，输出-1。<br /></p>

## 样例

### 输入1

```
6
20 7 14 18 3 5
```

### 输出1

```
1
```

## 提示

<p>在样例2中，原序列的乘积包含2^4这个因子，选择第四个位置的数字18，做一遍18 * 4的操作后，乘积包含2^6的因子，满足整除2^5。因此答案是1。可以验证，1是最优解。<br /></p>

