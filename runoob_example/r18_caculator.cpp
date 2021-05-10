/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     caculator.cpp                                                   *
*  @brief    简易计算器                                                      *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/09 22:24:44                                             *
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

#include <sstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "请输入算式: " << endl;
    cin  >> str;

    istringstream istr (str);

    int num1, num2;
    char op;
    istr >> num1 >> op >> num2;

    switch (op)
    {
        case '+':
            cout << num1 + num2;
            break;

        case '-':
            cout << num1 - num2;
            break;

        case '*':
            cout << num1 * num2;
            break;

        case '/':
            if (num2 == 0)
            {
                cout << "error不能除以零";
                break;
            }
            else
            {
                cout << num1 / num2;
                break;
            }

        default:
            // 如果运算符不是 +, -, * 或 /, 提示错误信息
            cout << "Error!  请输入正确运算符。";
            break;
    }

    return 0;
}