idef addOneRow(self, root, v, d):
    temp, temp.left = TreeNode(v), root
    row = [temp]
    for _ in range(d - 1):
        row = [kid for node in row for kid in (node.left, node.right) if kid]
    for node in row:
        node.left, node.left.left = TreeNode(v), node.left
        node.right, node.right.right = TreeNode(v), node.right
    return temp.left
