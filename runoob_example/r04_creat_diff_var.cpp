/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     creat_diff_var.cpp                                              *
*  @brief    创建不同的变量                                                   *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/08 21:32:02                                             *
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
#include <string>
using namespace std;

int main()
{
    // 创建变量
    int    myNum       = 5;         // 整型
    float  myFloatNum  = 5.99;      // 单精度浮点型
    double myDoubleNum = 9.98;      // 双精度浮点型
    char   myLetter    = 'D';       // 字符型
    bool   myBoolean   = true;      // 布尔型
    string myString    = "Runoob";  // 字符串

    // 输出变量
    cout  << "int    : " << myNum       << "\n";
    cout  << "float  : " << myFloatNum  << "\n";
    cout  << "double : " << myDoubleNum << "\n";
    cout  << "char   : " << myLetter    << "\n";
    cout  << "bool   : " << myBoolean   << "\n";
    cout  << "string : " << myString    << "\n";
}