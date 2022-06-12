#User function Template for python3

from collections import deque
class Solution:
    def possible_paths(self, edges, n, s, d):
        ways=[0 for i in range(n)]
        ways[s]=1
        graph=[[] for i in range(n)]
        for i,j in edges:
            graph[i].append(j)
        q=deque([s])
        while q:
            a=q.popleft()
            for i in graph[a]:
                q.append(i)
                ways[i]+=1
        return ways[d]

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n, m, s, d = input().split()
		n = int(n); m = int(m); s = int(s); d = int(d);
		edges = []
		for _ in range(m):
		    x,y = input().split()
		    x = int(x); y = int(y);
		    edges.append([x,y])
		obj = Solution()
		ans = obj.possible_paths(edges, n, s, d)
		print(ans)


# } Driver Code Ends