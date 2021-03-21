using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.LeeCode.Offer07
{
    /// <summary>
    /// https://leetcode-cn.com/problems/zhong-jian-er-cha-shu-lcof/
    /// </summary>
    public class BuilderTreeVer01
    {

        public TreeNode? Build(int[] preorder, int[] inorder)
        {
            if (preorder == null || preorder.Length < 1)
            {
                return null;
            }
            var head = preorder[0];
            TreeNode headNode = new TreeNode(head);
            List<int> inlefNodes = new List<int>(preorder.Length);
            List<int> inrighNodes = new List<int>(preorder.Length);
            bool mark = false;
            for (int i = 0; i < inorder.Length; i++)
            {
                if (mark)
                {
                    inrighNodes.Add(inorder[i]);
                }
                else
                {
                    if (head == inorder[i])
                    {
                        mark = true;
                    }
                    else
                    {
                        inlefNodes.Add(inorder[i]);
                    }
                }
            }

            

            var prelefNodes = preorder.Intersect(inlefNodes).ToArray();
            var prerighNodes = preorder.Intersect(inrighNodes).ToArray();

            headNode.left = Build(prelefNodes, inlefNodes.ToArray());
            headNode.right = Build(prerighNodes, inrighNodes.ToArray());

            return headNode;
        }
    }
}
