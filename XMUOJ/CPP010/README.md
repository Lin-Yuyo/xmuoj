# 山谷数

| 题目链接 | [山谷数](http://xmuoj.com/problem/CPP010) |
| --- | --- |
| 可用语言 | C, C++ |
| 时间限制 | 1000 MS |
| 内存限制 | 128 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p>今天我们来认识一种全新的数: 山谷数。</p><p>当一个数字，从左到右依次看过去数字没有出现先递增接着递减的“山峰”现象，就称为“山谷数”。它可以递增，也可以递减，还可以先递减再递增。在递增或递减的过程中可以出现相等的情况。</p><p>比如，1，10，12，212，111，112，32122都是山谷数。 121，12331，21212则不是。</p>

## 输入

<p>输入整数 $n$ ， $0 \leq n \leq 2^{31} - 1$ 。<br /></p>

## 输出

<p>如果整数 $n$ 是山谷数，输出Yes，否则输出No。<br /></p>

## 样例

### 输入1

```
1
112
121

```

### 输出1

```
Yes
Yes
No
```

