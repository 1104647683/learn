/*****************************************************************************
*  Copyright (c) 2021 FuDongcheng, GPL License.                              *
*                                                                            *
*  @file     factorial.cpp                                                   *
*  @brief    求阶乘                                                          *
*  @author   Fadegentle                                                      *
*  @version  1.0.0.0                                                         *
*  @date     2021/05/09 16:37:43                                             *
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

int main(){
    unsigned int n;
    unsigned long long factorial = 1;

    cout << "Please input a number ";
    cin >> n;

    for(int i = 1; i <= n; ++i){
        factorial *= i;
    }

    cout << n << "'s factorial is " << factorial << endl;
    return 0;
}