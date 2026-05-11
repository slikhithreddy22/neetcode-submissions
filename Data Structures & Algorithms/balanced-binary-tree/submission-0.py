# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        isbalance = True
        def dfs(root):
            nonlocal isbalance
            if root is None:
                return 0
            lh = dfs(root.left)
            rh = dfs(root.right)

            if not -1<=(lh-rh)<=1:
                isbalance = False
            return 1+max(lh,rh)
        dfs(root)
        return isbalance



        