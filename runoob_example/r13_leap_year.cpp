/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     leap_year.cpp                                                   *
*  @brief    判断闰年                                                        *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/09 17:37:21                                             *
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
    int year;

    cout << "请输入年份: " << endl;
    cin  >> year;

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        cout << year << " 是闰年" << endl;
    }

    else
    {
        cout << year << " 不是闰年" << endl;
    }
}