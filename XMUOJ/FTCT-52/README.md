# 凤凰花开的路口

| 题目链接 | [凤凰花开的路口](http://xmuoj.com/problem/FTCT-52) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 500 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<blockquote><p>S先生说要以“凤凰花开的路口”为题出一道题，于是就有了一道题。 ——M先生</p></blockquote><p><strong>也许，你也曾迷茫过今后要前往何方。</strong></p><p>此时此刻，在向母校、向鹭岛告别之际，有很多可以选择的道路。当然，时光不能回溯，所以你选择的路永远都是<strong>单行道</strong>。</p><p>但是这并不意味着，我们就永远不再相遇。所以或许，不同的路也能通向相同的终点。答案，等你来寻找。</p><p>给定一张 $n$ 个点， $m$ 条单行道的图，我们现在在相同的起点 $s$ ，我们是否可以选择<strong>不同的路径</strong>去往相同的终点？</p><p><strong>不同的路径</strong>意味着，我们在旅途中并不会相遇，独自走向了不同的道路。但是，重逢总是难以预测的，所以我们或许会在<strong>任意的点</strong>相遇，由你决定。</p><p>如果我们可能重逢，那便是一种幸运，有这样的可能性<code>Possible</code>，就有着无限的期待；即使无法重逢，<code>Impossilbe</code>，那也不要难过，这意味着我们都走向了更广阔的天地，只是现在知晓的前路太少，导致数学上的概率为0。</p><p><strong>形式化地，你需要确定是否存在两条不同的路径，经过的点各不相同，但最终会走向某个与起点不同的点（i.e. 路径终点相同）。如果存在，输出<code>Possible</code>；否则，输出<code>Impossible</code>。</strong></p><p><br /></p><p>出题者：某位XMU大四同学</p>

## 输入

<p>第一行是三个正整数  $n, m, s(\leq 2 \times 10^5)$  ，定义参见问题描述。</p><p>接下来  $m$  行，每行两个正整数  $u, v$ ，描述一条从编号为  $u$  的点走向编号为  $v$  的点的边。</p>

## 输出

<p>如果能够找到这样的两条路径，输出一行一个字符串<code>Possible</code>；否则，输出<code>Impossible</code>。</p>

## 样例

### 输入1

```
5 5 1
1 2
2 3
1 4
4 3
3 5
```

### 输出1

```
Possible
```

### 输入2

```
3 3 2
1 2
2 3
3 1
```

### 输出2

```
Impossible
```

## 来源

欧洲XCPC改编

