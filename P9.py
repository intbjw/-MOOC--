#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time : 2019/10/30 21:47
# @Author : Moewww
# @File : P9.py
# @Software:PyCharm
strings = input()
s = list()
flag = 1
n, m = 0, 0

for ch in strings:
    # print(s)
    if ch == '(' or ch == '[' or ch == '{':
        n = n + 1
        s.append(ch)
    elif ch == ')' or ch == ']' or ch == '}':
        m = m + 1
        if s:
            if (ch == ')' and s[-1] == '(') or (ch == ']' and s[-1] == '[') or (ch == '}' and s[-1] == '{'):
                s.pop()
        else:
            flag = 0
print("{} {}".format(n, m))
if flag == 1:
    if s:
        print("NO")
    else:
        print("YES")
else:
    print("NO")
