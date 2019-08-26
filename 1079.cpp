// use trie to solve the problem. 
// I think it perhaps can be solved by dynamic programming, 
// but the dimension is unknown and there's no proper data structure for unknown dimension DP.

struct Node {
	int index;
	vector<Node*> children;
	Node(int index) :index(index) {}
};
class Trie {
private:
	Node *root;
	vector<int> letterNum;
	int letterNumSize;
	void setup(Node* root) {
		for (int i = 0; i < letterNumSize; i++) {
			if (letterNum[i] > 0) {
				Node *child = new Node(i);
				root->children.push_back(child);
				letterNum[i]--;
				setup(child);
				letterNum[i]++;
			}
		}
	}
	int nodeNum(Node* root) {
		int res = 1;
		for (int i = 0; i < root->children.size(); i++)
			res += nodeNum(root->children[i]);
		return res;
	}
public:
	Trie(vector<int> letterNum) :root(new Node(-1)), letterNum(letterNum), letterNumSize(letterNum.size()) {
		setup(root);
	}
	int nodeNum() {
		int res = 0;
		for (int i = 0; i < root->children.size(); i++)
			res += nodeNum(root->children[i]);
		return res;
	}

};

class Solution {
public:
	int numTilePossibilities(string tiles) {
		int tmpLetterNum[26];
		memset(tmpLetterNum, 0, sizeof(tmpLetterNum));
		for (int i = 0; i < tiles.length(); i++)
			tmpLetterNum[tiles[i] - 'A']++;
		vector<int> letterNum;
		for (int i = 0; i < 26; i++)
			if (tmpLetterNum[i] > 0)
				letterNum.push_back(tmpLetterNum[i]);
		Trie* trie = new Trie(letterNum);
		return trie->nodeNum();
	}
};
