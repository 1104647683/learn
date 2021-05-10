/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     divmod.cpp                                                      *
*  @brief    求商余                                                          *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/09 12:14:43                                             *
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
    int dividend, divisor, quotient, remainder;

    cout << "输入被除数：";
    cin  >> dividend;

    cout << "输入除数：";
    cin  >> divisor;

    quotient  = dividend / divisor;
    remainder = dividend % divisor;

    cout << dividend << " ÷ " << divisor << " = " << quotient << " ... " << remainder;
    return 0;
}