# 铺设光纤问题

| 题目链接 | [铺设光纤问题](http://xmuoj.com/problem/FTCT004) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p>开学季来临，联通通信公司中标翔安校区的宽带业务，需要在所有学生公寓之间铺设光纤接入宽带网，面对同行电信和移动的竞争压力，联通宽带业务组长需要压缩铺设光纤的成本。</p><p>现在给出各个学生公寓之间的光纤铺设成本的一览表，现在请你替他们找到能够连接所有学生公寓并使铺设的光纤最短的方案。</p>

## 输入

<p>第一行：学生公寓的个数，N（3≤N≤100）。</p><p>接下来的N行：一个N×N的矩阵,表示每所学生公寓之间的距离dij。用空格分隔。（dij&lt;=100000）</p>

## 输出

<p>能连接所有学生公寓所铺设的光纤的最小长度。<br /></p>

## 样例

### 输入1

```
4
0 4 9 21
4 0 8 17
9 8 0 16
21 17 16 0

```

### 输出1

```
28
```

