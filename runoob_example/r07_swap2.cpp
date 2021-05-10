/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     swap2.cpp                                                       *
*  @brief    两数交换                                                        *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/09 12:28:44                                             *
*  @email    fudongcheng110@foxmail.com                                      *
*  @license  GNU General Public License (GPL)                                *
*                                                                            *
*----------------------------------------------------------------------------*
*  Remark         : Description                                              *
*----------------------------------------------------------------------------*
*  Change History :                                                          *
*  <Date>     | <Version> | <Author>       | <Description>                   *
*----------------------------------------------------------------------------*
*  2021/05/09 | 1.0.0.0   | Fadegentle     | Create file                     *
*----------------------------------------------------------------------------*
*                                                                            *
*****************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, tmp;

    cout << "输入 a : ";
    cin  >> num1;

    cout << "输入 b : ";
    cin  >> num2;

    cout << "则 a = " << num1 << ", b = " << num2;

    tmp   = num1;
    num1  = num2;
    num2  = tmp;

    cout << "交换后 a = " << num1 << ", b = " << num2;
}