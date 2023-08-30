#User function template for Python

class Solution:    
    #Function to reverse every sub-array group of size k.
    def reverseInGroups(self, arr, N, K):
        for i in range(0,N,K):
            if(i>N-K):
                arr[i:] = reversed(arr[i:])
            else:
                arr[i:i+K] = reversed(arr[i:i+K])
        return arr            
        # code here
