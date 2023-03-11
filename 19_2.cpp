#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct TreeNode {
	bool inner = true;
	int weight;
	TreeNode* left = NULL;
	TreeNode* right = NULL;
}*TreePtr;


bool comp(TreePtr a, TreePtr b)
{
	return a->weight > b->weight;
}

void buildHaffmanTree(vector<TreePtr>& v)
{
	while (v.size() > 1) {
		TreePtr left = v[v.size() - 1];
		v.pop_back();
		TreePtr right = v[v.size() - 1];
		v.pop_back();
		TreePtr outer = new TreeNode;
		outer->inner = false;
		outer->weight = left->weight + right->weight;
		outer->left = left, outer->right = right;
		v.push_back(outer);
		sort(v.begin(), v.end(), comp);
	}
}

int getWDL(TreePtr root, int depth)
{
	if (root == NULL)
		return 0;
	if (root->inner)
		return depth * root->weight;
	return getWDL(root->left, depth + 1) + getWDL(root->right, depth + 1);
}

//int main()
//{
//	int n, w;
//	vector<TreePtr> v;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> w;
//		TreePtr tmp = new TreeNode;
//		tmp->weight = w;
//		v.push_back(tmp);
//	}
//	sort(v.begin(), v.end(), comp);
//	buildHaffmanTree(v);
//	TreePtr root = v[v.size() - 1];
//	v.pop_back();
//	cout << getWDL(root, 0) << endl;
//	return 0;
//}