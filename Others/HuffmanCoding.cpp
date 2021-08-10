#include<bits/stdc++.h>
using namespace std;

map<char, string> table;

int charCount,codeCount;

class HuffmanNode
{
public: 
	char character;
	int frequency;

	HuffmanNode *left;
	HuffmanNode *right;

	HuffmanNode(char c, int f)
	{
		character = c;
		frequency = f;
		left = nullptr;
		right = nullptr;
	}
};

class Compare
{
public:
    bool operator() ( HuffmanNode* left, HuffmanNode* right)
    {
        return left->frequency > right->frequency;
    }
};

void generateHuffmanCode(HuffmanNode* node,int code[], int top)
{
    if(node->left)
    {
        code[top]=0;  // code[0] = 0;
        generateHuffmanCode(node->left,code,top+1);
    }

    if(node->right)
    {
        code[top]=1;
        generateHuffmanCode(node->right,code,top+1);
    }

    if(!node->left && !node->right)
    {
        char ch = node->character;
        string str="";

        codeCount += top;
        charCount += (top * node->frequency) + 8;

        for(int i=0; i<top; i++) {
            str += (code[i]+48);
        }

        table[ch]=str;
    }
}

void generateHuffmanTree(map<char,int>freq)
{
    map<char,int>::iterator it;
    priority_queue<HuffmanNode*, vector<HuffmanNode*>, Compare > PQ;

    for(it=freq.begin(); it!=freq.end(); it++)
    {
        HuffmanNode* newNode = new HuffmanNode(it->first,it->second);
        PQ.push(newNode);
    }

    while(PQ.size() != 1)
    {
        HuffmanNode* left = PQ.top();
        PQ.pop();
        HuffmanNode* right = PQ.top();
        PQ.pop();

        HuffmanNode* node = new HuffmanNode('*',left->frequency+right->frequency);
        node->left = left;
        node->right = right;
        PQ.push(node);
    }

    HuffmanNode* root = PQ.top();

    int a[10000];
    int top=0;

    generateHuffmanCode(root,a,top);
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;

    getline(cin,str);

    map<char,int> freq;

    for (int i = 0; str[i]; ++i)
    {
    	freq[str[i]]++;
    }
    int ans = 0;

    generateHuffmanTree(freq);

   // cout<<freq.size()<<endl;

   auto itr = freq.begin();

   if(freq.size()==1){
   		cout<<itr->second<<endl;
   }else{
   	for(auto it: table){
    	string t = it.second;
    	
        ans += t.size() * freq[it.first];
    }
    cout<<ans<<endl;
   }

    

   


}