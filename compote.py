# -*- coding: utf-8 -*-
"""
Created on Tue Feb  4 16:59:36 2020

@author: WIN 10
"""
a = int(input())
 
b = int(input())
 
c = int(input())
i = 0
for i in range (a+1):
    if(i*2<=b and i*4<=c):
       d = i+i*2+i*4 
print(d)           