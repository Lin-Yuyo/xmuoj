# 二进制密码锁

| 题目链接 | [二进制密码锁](http://xmuoj.com/problem/XMU006) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 高 |

## 题目描述

<p><img alt="image.png" src="/public/upload/256a24f724.png" width="197" height="134" /><br /></p><p>在海拉鲁大陆有一种特殊的二进制密码锁，由n个相连的按钮组成（n&lt;30），按钮有凹/凸两种状态，用手按按钮会改变其状态。</p><p>然而让人头疼的是，当按一个按钮时，跟它相邻的两个按钮状态也会反转。当然，如果按的是最左或者最右边的按钮，该按钮只会影响到跟它相邻的一个按钮。</p><p>当前密码锁状态已知，需要解决的问题是，林克至少需要按多少次按钮，才能将密码锁转变为所期望的目标状态。</p>

## 输入

<p><span style="color: rgb(35, 31, 23);">两行，给出两个由0、1组成的等长字符串，表示当前/目标密码锁状态，其中0代表凹，1代表凸。</span><br /></p>

## 输出

<p><span style="color: rgb(35, 31, 23);">至少需要进行的按按钮操作次数，如果无法实现转变，则输出impossible。</span><br /></p>

## 样例

### 输入1

```
011
000
```

### 输出1

```
1
```

## 提示

<p><a href="https://www.bilibili.com/video/BV1Zi4y1N7dU" target="_blank">Andy讲解(2021)</a><br /></p>

