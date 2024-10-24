# 宁宁与校庆气球

| 题目链接 | [宁宁与校庆气球](http://xmuoj.com/problem/FTCT-49) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p>每年的 4 月 6 日是厦门大学的校庆日，在这一天，校内会举办各种各样的活动。在今年的校庆活动中，宁宁同学负责了某会场的布置工作。</p><p>为了增添校庆的欢乐气氛，宁宁准备了 2*N 个彩色气球用于布置会场，每种颜色的气球各有两个（颜色用 1 到 N 表示）。这些气球分别放在了 M 个盒子中，每个盒子中有 k_i (1&lt;=i&lt;=M) 个气球。对于每个盒子，从顶部到底部气球的颜色依次为 a_i_j (1&lt;=j&lt;=k_i)。</p><p>现在，宁宁想要将所有的气球按照颜色两两配对取出。为了防止气球乱飞，规定只能从盒子的顶部取出气球。宁宁的策略是每次选择两个不同的盒子，若其顶部气球的颜色相同，则将它们取出。然后重复此操作，直到所有气球都被取出或者无法进行操作。请你帮助宁宁提前判断她是否可以按照这样的规则取出所有的气球。</p><p><br /></p><p>出题者为刘之流同学。</p>

## 输入

<p>第 1 行两个整数 N (1&lt;=N&lt;=2e5)，M (2&lt;=M&lt;=2e5)。</p><p>接下来是 M 组描述盒子的数据，每组数据两行。</p><p>其中第 1 行有 1 个整数 k_i (k_i&gt;=1)，表示此盒子中有 k_i 个气球。</p><p>第 2 行有 k_i 个整数，表示从顶部到底部的气球颜色（颜色用 1 到 N 表示）。</p>

## 输出

<p>若宁宁可以将所有的气球都配对取出，则输出&quot;Yes&quot;，否则输出&quot;No&quot;。<br /></p>

## 样例

### 输入1

```
2 2
2
1 2
2
1 2
```

### 输出1

```
Yes
```

### 输入2

```
2 2
2
1 2
2
2 1
```

### 输出2

```
No
```

