/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     isvowel.cpp                                                     *
*  @brief    判断是否为元音                                                   *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/09 12:40:29                                             *
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
    char c;

    cout << "输入一个字母: ";
    cin  >> c;

    if ((c == 'a' || c == 'o' || c == 'e' || c == 'i' || c == 'u') ||
        (c == 'A' || c == 'O' || c == 'E' || c == 'I' || c == 'U'))
    {
        cout << c << " 是元音";
    }
    else
    {
        cout << c << " 是辅音";
    }

    return 0;
}