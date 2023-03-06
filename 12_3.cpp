#include <iostream>
#include <string>

using namespace std;

typedef struct TreeNode {
	char data;
	TreeNode* left = NULL;
	TreeNode* right = NULL;
}*TreePtr;

TreePtr create(string& mid, string& post, int ml, int mr, int pl, int pr)
{
	if (pl >= pr)
		return NULL;
	TreePtr root = new TreeNode;
	root->data = post[pr - 1];
	int index = ml;
	for (; index < mr; index++) 
		if (mid[index] == post[pr - 1])
			break;
	root->left = create(mid, post, ml, index, pl, pl + index - ml);
	root->right = create(mid, post, index + 1, mr, pl + index - ml, pr - 1);
	return root;
}

void preOrder(TreePtr root)
{
	if (!root)
		return;
	cout << root->data;
	preOrder(root->left);
	preOrder(root->right);
}

//int main()
//{
//	string post, mid;
//	cin >> post >> mid;
//	int n = mid.size();
//	TreePtr root = create(mid, post, 0, n, 0, n);
//	preOrder(root);
//	return 0;
//}