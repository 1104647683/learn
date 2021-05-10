/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     LCM2.cpp                                                        *
*  @brief    求最小公倍数                                                     *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/09 21:26:01                                             *
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

int GCD2(int num1, int num2)
{
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

    return num1;
}

int main()
{
    int num1, num2;

    cout << "输入两个数: " << endl;
    cin  >> num1 >> num2;
    // 最小公倍数 = 两数之积 / 最大公约数
    cout << num1 << " 和 " << num2 << " 的最小公倍数是: " << num1 * num2 / GCD2(num1, num2) << endl;

    return 0;
}

