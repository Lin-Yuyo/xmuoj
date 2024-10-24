# 日程规划

| 题目链接 | [日程规划](http://xmuoj.com/problem/FTCT-54) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<h2><span style="color: rgb(51, 51, 51);">小A喜欢玩原神，但是他必须在写完题后玩。他每天要么玩原神，要么做题。</span><br /></h2><p>小A每天会狠写 x_i 道算法题，他会累计自己写的题数。</p><p>小A喜欢抽卡，因此他每天给自己一个随机数 c。如果他累计做的题数达到 c ，他就给自己一个机会，奖励自己玩一次原神（可以选择当天不玩）。</p><p>需要注意，每当小A奖励自己玩原神后，他会“消耗”相应数量的题目，即他的累计题数会减去当天的 c。并且他不允许透支自己未来的题数贷款玩原神。</p><p>求经过了 k 天后小A最多能玩多少次原神。</p><p>（小A做事很专心，如果选择在某天玩原神，他这一天就不做题。）</p><p><br /></p><p>出题者为孙欣怡同学</p>

## 输入

<p>第1行输入一个n，代表总天数。（1&lt;=n&lt;=1e6）</p><p>第2行到第n+1行，每行输入两个数c, x，表示第i天可以玩原神的消耗题数c和第i天如果不玩时他的该天做题数x。（1&lt;=c,x&lt;=1e7）</p>

## 输出

<p><span style="color: rgb(51, 51, 51);">因为n的个数较大，因此输出到从第1天开始，到第1天、第2天……第n天各自最多能玩原神次数的异或和。</span><br /></p>

## 样例

### 输入1

```
6
2 1
2 3
3 2
1 5
4 1
2 2
```

### 输出1

```
2
```

### 输入2

```
14
26 14 
8 21 
17 24 
13 6 
5 4 
11 12 
3 18 
22 23 
25 9 
27 28 
19 16 
2 20 
7 1 
10 15
```

### 输出2

```
4
```

## 提示

<p>对样例1的解释：</p><p>第1天到第1天、第1天到第2天……第1天到第6天，分别能玩的最大原神次数是0, 0, 1, 2, 2, 3，异或和为2.</p>
