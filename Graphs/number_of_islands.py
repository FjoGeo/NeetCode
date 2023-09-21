import collections

class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        if not grid:
            return 0
        
        rows, cols = len(grid), len(grid[0])

        # mark positions visited by using a set
        visit = set()
        islands = 0

        def bfs(r,c):
            q = collections.deque()
            visit.add((r,c)) # mark the cell that is visited
            q.append((r,c)) # and add it to the deque

            while q: # not empty -> expand island
                row, col = q.popleft()
                directions = [[1, 0], [-1,0] , [0,1] , [0,-1]] # check positions of popped elements, 4 directions

                for dr, dc in directions:
                    r,c = row + dr, col + dc
                    if ((r ) in range(rows) # check if position is in bound
                        and (c) in range(cols) 
                        and grid[r][c] == '1'
                        and (r, c) not in visit): # position hasn't been visited
                        q.append((r, c)) # if true, run BFS on the cell
                        visit.add((r, c)) # mark it as visited


        # visit every single position in the grid

        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == "1" and (r,c) not in visit:
                    # run traversel -> BFS
                    bfs(r,c)
                    islands += 1
        return islands