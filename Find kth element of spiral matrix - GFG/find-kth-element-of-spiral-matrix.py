#User function Template for python3

class Solution:
    def findK(self, a, n, m, k):
        left = 0
        right = m - 1
        top = 0
        bottom = n - 1
        count = 1

        while left <= right and top <= bottom:
            for i in range(left, right + 1):
                if count == k:
                    return a[top][i]
                count += 1
            top += 1

            for i in range(top, bottom + 1):
                if count == k:
                    return a[i][right]
                count += 1
            right -= 1

            if top <= bottom:
                for i in range(right, left - 1, -1):
                    if count == k:
                        return a[bottom][i]
                    count += 1
                bottom -= 1

            if left <= right:
                for i in range(bottom, top - 1, -1):
                    if count == k:
                        return a[i][left]
                    count += 1
                left += 1


#{ 
 # Driver Code Starts

#Initial Template for Python 3

for _ in range(int(input())):
    n, m, k = map(int,input().split())
    a = [
            list(map(int,input().split()))
            for _ in range(n)
        ]
    
    ob = Solution()
    print(ob.findK(a,n,m,k))
    
# } Driver Code Ends