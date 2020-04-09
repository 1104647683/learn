# -*- coding: utf-8 -*-
from math import sqrt


def is_prime(num):
    """
    筛选 num 以内的所有素数
    """
    if num is 1:
        return False
    for i in range(2, int(sqrt(num)) + 1):
        if num % i is 0: 
            return False
    return True