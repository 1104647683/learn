/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     std_io.cpp                                                      *
*  @brief    标准输入输出                                                     *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/08 20:09:35                                             *
*  @email    fudongcheng110@foxmail.com                                      *
*  @license  GNU General Public License (GPL)                                *
*                                                                            *
*----------------------------------------------------------------------------*
*  Remark         : Description                                              *
*----------------------------------------------------------------------------*
*  Change History :                                                          *
*  <Date>     | <Version> | <Author>       | <Description>                   *
*----------------------------------------------------------------------------*
*  2021/05/08 | 1.0.0.0   | Fadegentle     | Create file                     *
*----------------------------------------------------------------------------*
*                                                                            *
*****************************************************************************/


#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "输入一个整数：";
    cin >> number;

    cout << "输入的数字为：" << number;
    return 0;
}