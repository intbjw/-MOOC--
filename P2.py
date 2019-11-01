#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Time : 2019/11/1 11:03
# @Author : Moewww
# @File : P2.py
# @Software: PyCharm
strings = input()
exp = strings.split()
num = list()
for ch in exp:
    if ch in "+-*/":
        x = num.pop()
        y = num.pop()
        if ch == '+':
            num.append(x + y)
        elif ch == '-':
            num.append(y - x)
        elif ch == '*':
            num.append(x * y)
        else:
            num.append(y / x)
    else:
        num.append(float(ch))
res = float(num.pop())
print('{:.1f}'.format(res))

            


