/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     creat_triangle.cpp                                              *
*  @brief    创建各种三角形                                                   *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/09 18:26:18                                             *
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

// ! 杨辉三角
int main()
{
    int row, coef;

    cout << "请输入所需行数: " << endl;
    cin  >> row;

    for (int i = 0; i < row; i++)
    {
        for (int space = 1; space <= row - i; space++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
            }

            cout << coef << "   ";
        }
        cout << endl;
    }

    return 0;
}