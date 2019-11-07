#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
int n, res = 0;

struct tree{
	int val;
	tree* left;
	tree* right;
	tree(int x){
		val = x;
		left = right = nullptr;
	}
};
void inorder(tree* root){
	if(!root) return;
	if(!root->left && !root->right){
		res += root->val;
		return;
	}
	inorder(root->left);
	inorder(root->right);
}
int main(){
	unordered_map<int, tree*> mp;
	cin>>n;
	int x, d, e;
	tree* root = nullptr;
	for(int i = 1; i <= n; i ++){
		cin>>x;
		if(i != 1){
			cin>>d>>e;
			auto r = mp[x];
			if(d == 0) { //左儿子
				r->left = new tree(e);
				mp[e] = r->left;
			}else{ //右儿子
				r->right = new tree(e);
				mp[e] = r->right;
			}
		}else{
            root = new tree(x);
            mp[x] = root;

        }
	}
	inorder(root);
	cout<<res<<endl;
	return 0;
}