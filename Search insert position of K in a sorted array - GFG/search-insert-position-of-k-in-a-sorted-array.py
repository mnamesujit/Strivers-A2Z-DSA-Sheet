#User function Template for python3

class Solution:
    def searchInsertK(self, Arr, N, k):
        # code here
        left = 0
        right = N - 1
        index = 0
        while(left <= right):
            mid = left + (right - left) // 2
            if Arr[mid] == k: return mid
            elif Arr[mid] < k:
                left = mid + 1
                index = left
            else:
                right = mid - 1
        return index


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range (t):
        N = int(input())
        Arr = input().split()
        for itr in range(N):
            Arr[itr] = int(Arr[itr])
        k = int(input())
        ob = Solution()
        print(ob.searchInsertK(Arr, N, k))
# } Driver Code Ends