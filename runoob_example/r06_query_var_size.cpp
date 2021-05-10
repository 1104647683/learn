/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     query_var_size.cpp                                              *
*  @brief    查看各种变量的大小                                               *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/09 12:25:45                                             *
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
    cout  << "char  : " << sizeof(char)   << " 字节" << endl;
    cout  << "int   : " << sizeof(int)    << " 字节" << endl;
    cout  << "float : " << sizeof(float)  << " 字节" << endl;
    cout  << "double: " << sizeof(double) << " 字节" << endl;

    return 0;
}