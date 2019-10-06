//
//  main.cpp
//  MOOC
//
//  Created by intbjwww on 2019/10/6.
//  Copyright © 2019 intbjwww. All rights reserved.
//

#include <stdio.h>

int getTreasure(int *pBucket, int x, int y);

int main(){
    int bucket,total;
    bucket = total = 0;
    scanf("%d",&total);
    for (int i=0; i<total; i++) {
        int x,y;
        x = y = 0;
        scanf("%d%d", &x, &y);
        int flag = getTreasure(&bucket, x, y);
        printf("[%d]:%d\n", flag, bucket);
    }
}
int getTreasure(int *pBucket, int x, int y)
{
    int flag=0;
    if(x%2==1&&y%2==1)
    {
        *pBucket += *pBucket/3;
        flag=1;
    }
    else if(x%2==0&&y%2==0)
    {
        *pBucket += 5;
        flag=1;
    }
    return flag;
}
/*
 给你准备好一个小桶，告诉你一片广袤的天地，随手一指，挖宝去吧~
 
 说计算机话！
 
 好吧，题目是这样的：
 
 假设一个二维区域内藏有财宝，对于给定的此前寻到的财宝数量以及坐标(x,y)，按照以下规则在该位置寻回财宝，并更新财宝数量。
 
 规则：
 
 如果x、y均为奇数，则获得原有三分之一数量的财宝，小数部分忽略不计
 如果x、y均为偶数，则获得 5 财宝
 如果x、y奇偶性不同，则不获得财宝
 注意：财宝数量、坐标x、坐标y都是int类型范围内的非负整数，在同一个位置可以重复寻找并获得财宝。
 其中，整型参数x、y表示坐标，指针型参数pBucket指向财宝计数的整型变量，函数根据x、y和此前的财宝数目，判断新获取的财宝并修改相应数值。返回类型为int，如果获得财宝，返回1；未获得财宝，返回0。
 

 */

