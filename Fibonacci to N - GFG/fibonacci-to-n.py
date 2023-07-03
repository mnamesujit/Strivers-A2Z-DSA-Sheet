#User function Template for python3

class Solution:
    def nFibonacci(self,N):
        #code here
        l = []
        a = 0
        b = 1

        while a <= N:
            l.append(a)
            curr = a + b
            a = b
            b = curr
        return l


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        ob=Solution()
        ans=ob.nFibonacci(N)
        for i in ans:
            print(i,end=" ")
        print()
# } Driver Code Ends