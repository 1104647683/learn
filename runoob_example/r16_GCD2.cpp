/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     GCD2.cpp                                                        *
*  @brief    求最大公约数                                                     *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/09 18:36:56                                             *
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
    int num1, num2;

    cout << "输入两个数: " << endl;
    cin  >> num1 >> num2;

    // ! 更相减损术
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }

        else
        {
            num2 -= num1;
        }
    }

    cout << "最大公约数是: " << num1;

    return 0;
}