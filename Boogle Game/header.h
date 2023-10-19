#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 26;
const int MAX_ROW = 5;
const int MAX_COL = 5;

struct Node {
	Node* arr[MAX];
	bool flag;

	Node() {
		flag = NULL;
		for (int i = 0; i < MAX; i++)
			arr[i] = NULL;
	}
};

class Dictionary {
private:
	Node* root;
	Node* currNode;

	int numWords;
	string lang_file;

public:
	Dictionary();
	Dictionary(string file);
	void addWord(string word);
	bool isWord(string word);
	bool isPrefix(string word);
	void PrintWords(string prefix);
	void PrintHelper(Node* startNode, string prefix);
	int wordCount();
	void SolveBoard(char board[][5], int steps[][5], Dictionary& dict, Dictionary& wordsFound, bool printBoard);
	void SearchForWord(int row, int col, Dictionary dict, Dictionary wordsFound, char board[][5], int steps[][5], int numofsteps, string currPrefix, bool printBoard, ofstream& output);
	int res(int lang);
};
