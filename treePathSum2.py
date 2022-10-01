# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution: 
    # res=[]
    # def __init__():
    #     res=[]
    def inorder(self,root,targetSum,path,ans):
                if not root:
                    return
                path.append(root.val)

                if not root.left and not root.right and targetSum==root.val:
                        ans.append(list(path))
                self.inorder(root.left,targetSum-root.val,path,ans)
                self.inorder(root.right,targetSum-root.val,path,ans)
                path.pop()
            
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        sm=0
        ans=[]
        path=[]
        self.inorder(root,targetSum,[],ans)
        return ans
