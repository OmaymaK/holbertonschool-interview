#!/usr/bin/python3
"""
Minimum Operations.
"""


def minOperations(n):
    """ Minimum Operations."""
    r = 0
    op = 0
    i = 1
    while i < n:
        if n % i == 0:
            op += 2
            r = i
            i += r
        else:
            i += r
            op += 1
    if i == n:
        return op
    else:
        return 0
