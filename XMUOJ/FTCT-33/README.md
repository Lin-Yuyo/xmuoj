# 调制四果汤

| 题目链接 | [调制四果汤](http://xmuoj.com/problem/FTCT-33) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p>四果汤是厦门地区的著名小吃。小明想喝四果汤，这个四果汤有n个元素（烧仙草、海石花、桃胶、椰果等），可以用<b>前</b><b>n</b><b>个</b>字母来表示。</p><p>小明在超市看到了T种配料，每种配料也会有一些元素，每个元素也可以用字母来表示（与上述四果汤的定义相同）。将不同的配料混合起来，即可得到一个元素为他们的并集的四果汤。</p><p>每种配料都有一个价格。现在小明想花<b>尽量少</b>的钱来购买配料，来调出自己想喝的四果汤，<b>调出来的饮料必须具有他想喝的四果汤的所有特征。</b></p><p><br /></p><p>出题人为李哲彦同学<br /></p>

## 输入

<p>第一行两个数字T, n。表示配料的数量与四果汤特征的数量。</p><p>接下来T行，每行一个数字w,表示配料的价格，之后一个字符串，表示这个配料的元素。</p><p>T≤1000</p><p>n≤15</p><p>w≤10000</p>

## 输出

<p>一行一个整数，最小的价格。如果调不出来，则输出-1<br /></p>

## 样例

### 输入1

```
4 3
5 C
6 B
16 BAC
4 A
```

### 输出1

```
15
```

### 输入2

```
1 2
10 A
```

### 输出2

```
-1
```

## 提示

<p>样例1：小明想喝的四果汤元素为ABC,选择1、2、4种配料只需要15元，比选择第3种配料更便宜。</p><p>样例2：小明想喝的四果汤元素为AB，但是配料只有A，显然调不出来，故输出-1.</p>

