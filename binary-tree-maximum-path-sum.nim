type
  TreeNode {.importc: "struct TreeNode".} = object
    val: cint
    left, right: ptr TreeNode

proc maxPathSum(root: ptr TreeNode): int 