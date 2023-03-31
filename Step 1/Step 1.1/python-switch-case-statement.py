# URL
# https://practice.geeksforgeeks.org/problems/java-switch-case-statement3529/1

import math
class Solution:
    def switchCase(self, choice, arr):
        # Code here

        #Python Compiler of GFG doesn't support the latest version of python so we cannot use Match-Case statement 
        # That's Why we are using if-else statement

        if choice==1:
            return math.pi*arr[0]*arr[0]
            
        else:
            return arr[0]*arr[1]
