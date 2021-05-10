/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     root_1_2.cpp                                                    *
*  @brief    求一元二次方程的根                                               *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/09 16:30:48                                             *
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
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "输入 a, b 和 c: ";
    cin  >> a >> b >> c;
    cout << "即所求方程为: " << a << "x^2 + " << b << "x + " << c << endl;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "有两实根且不同,分别是: " << x1 << " 和 " << x2 << endl;
    }

    else if (discriminant == 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        cout << "有且只有一个实根: " << "x1 = x2 = " << x1 << endl;
    }

    else
    {
        realPart      = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "有两共轭复根: " << realPart << " ± " << imaginaryPart;
    }

    return 0;
}