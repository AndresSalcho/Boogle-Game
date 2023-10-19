#include "header.h"
#include "random.h"

int numofwords = 0;

Dictionary::Dictionary()
{
    root = new Node;
    root->flag = false;
    numWords = 0;
    currNode = NULL;
}

Dictionary::Dictionary(string file)
{
    root = new Node;
    root->flag = false;
    numWords = 0;
    currNode = NULL; 

    ifstream input(file);
    string word;

    if (!input) {
        cout << "No se pudo leer el archivo" << endl;
        return;
    }

    while (input >> word)
        addWord(word);

    input.close();
}

void Dictionary::addWord(string word)
{
    currNode = root;

    for (int i = 0; i < word.length(); i++) {

        int index = (int)word[i] - (int)'a';

        if (currNode->arr[index] == NULL) {
            currNode->arr[index] = new Node;
            (currNode->arr[index])->flag = false;
        }

        currNode = currNode->arr[index];
    }

    currNode->flag = true;
    numWords++;
}


bool Dictionary::isWord(string word)
{
    currNode = root;
    bool isWord = false;

    for (int i = 0; i < word.length(); i++) {

        int index = (int)word[i] - (int)'a';

        if (currNode->arr[index] == NULL)
            return false;

        isWord = currNode->arr[index]->flag;
        currNode = currNode->arr[index];

    }

    return isWord;
}



bool Dictionary::isPrefix(string word)
{
    currNode = root;

    for (int i = 0; i < word.length(); i++) {

        int index = (int)word[i] - (int)'a';

        if (currNode->arr[index] == NULL)
            return false;

        currNode = currNode->arr[index];
    }

    return true;
}

void Dictionary::PrintWords(string prefix)
{
    currNode = root;

    for (int i = 0; i < prefix.length(); i++) {

        int index = (int)prefix[i] - (int)'a';

        currNode = currNode->arr[index];
    }

    for (int i = 0; i < 26; i++) {

        char letter = (int)'a' + i;

        PrintHelper(currNode->arr[i], prefix + letter);
    }
}


void Dictionary::PrintHelper(Node* startNode, string prefix)
{
    if (startNode == NULL)
        return;

    if (startNode->flag)
        cout << prefix << endl;

    for (int i = 0; i < 26; i++) {

        char letter = (int)'a' + i;

        PrintHelper(startNode->arr[i], prefix + letter);
    }

}

int Dictionary::wordCount()
{
    return numWords;
}

int Dictionary::res(int lang)
{
    string input;

    char board[5][5];
    int steps[5][5];

    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            steps[r][c] = 0;
        }
    }

    random rd;
    rd.a();

    if (lang == 1) { lang_file = "En.txt"; }
    if (lang == 2) { lang_file = "Es.txt"; }

    Dictionary dict(lang_file);
    cout << dict.wordCount() << " Palabras cargadas." << endl;
    cout << "-----------------------" << endl;

    for (int r = 0; r < 5; r++) {
        if (r == 0) {
            board[r][0] = rd.strrnd[0];
            board[r][1] = rd.strrnd[1];
            board[r][2] = rd.strrnd[2];
            board[r][3] = rd.strrnd[3];
            board[r][4] = rd.strrnd[4];
        }
        if (r == 1) {
            board[r][0] = rd.strrnd[5];
            board[r][1] = rd.strrnd[6];
            board[r][2] = rd.strrnd[7];
            board[r][3] = rd.strrnd[8];
            board[r][4] = rd.strrnd[9];
        }
        if (r == 2) {
            board[r][0] = rd.strrnd[10];
            board[r][1] = rd.strrnd[11];
            board[r][2] = rd.strrnd[12];
            board[r][3] = rd.strrnd[13];
            board[r][4] = rd.strrnd[14];
        }
        if (r == 3) {
            board[r][0] = rd.strrnd[15];
            board[r][1] = rd.strrnd[16];
            board[r][2] = rd.strrnd[17];
            board[r][3] = rd.strrnd[18];
            board[r][4] = rd.strrnd[19];
        }
        if (r == 4) {
            board[r][0] = rd.strrnd[20];
            board[r][1] = rd.strrnd[21];
            board[r][2] = rd.strrnd[22];
            board[r][3] = rd.strrnd[23];
            board[r][4] = rd.strrnd[24];
        }
    }

    cout << "-----------------------" << endl;
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            cout << board[r][c] << " ";
        }
        cout << endl;
    }
    cout << "-----------------------" << endl;

    Dictionary wordsFound;
    SolveBoard(board, steps, dict, wordsFound, true);

    return 0;

}

void Dictionary::SolveBoard(char board[][5], int steps[][5], Dictionary& dict, Dictionary& wordsFound, bool printBoard)
{
    string currPrefix;
    int numofsteps = 0;
    string output_file = "output.txt";
    ofstream output(output_file);
    if (!output)
        cout << "No se pudo abrir el archivo de salida." << endl;

    char input;
    //cout << "Mostrar respuestas? (y/n): " << endl;
   // cin >> input;
    input = 'y';

    if (input == 'y')
        printBoard = true;

    else if (input == 'n')
        printBoard = false;

    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            SearchForWord(r, c, dict, wordsFound, board, steps, numofsteps, currPrefix, printBoard, output);
        }
    }

    //cout << "Palabras escritas en " << output_file << endl;
}

void Dictionary::SearchForWord(int row, int col, Dictionary dict, Dictionary wordsFound, char board[][5], int steps[][5], int numofsteps, string currPrefix, bool printBoard, ofstream& output)
{
    if (row >= MAX_ROW || col >= MAX_COL)
        return;

    if (row < 0 || col < 0)
        return;

    if (steps[row][col] != 0)
        return;

    if (!dict.isPrefix(currPrefix))
        return;

    if (dict.isWord(currPrefix)) {
        if (!wordsFound.isWord(currPrefix)) {
            if (!printBoard) {
                wordsFound.addWord(currPrefix);
                output << currPrefix << endl;
            }
            else {
                wordsFound.addWord(currPrefix);
                output << currPrefix << endl;
            }
        }
    }

    currPrefix = currPrefix + board[row][col];
    steps[row][col] = ++numofsteps;

    SearchForWord(row, col - 1, dict, wordsFound, board, steps, numofsteps, currPrefix, printBoard, output);
    SearchForWord(row, col + 1, dict, wordsFound, board, steps, numofsteps, currPrefix, printBoard, output);
    SearchForWord(row - 1, col, dict, wordsFound, board, steps, numofsteps, currPrefix, printBoard, output);
    SearchForWord(row + 1, col, dict, wordsFound, board, steps, numofsteps, currPrefix, printBoard, output);
    SearchForWord(row + 1, col + 1, dict, wordsFound, board, steps, numofsteps, currPrefix, printBoard, output);
    SearchForWord(row + 1, col - 1, dict, wordsFound, board, steps, numofsteps, currPrefix, printBoard, output);
    SearchForWord(row - 1, col + 1, dict, wordsFound, board, steps, numofsteps, currPrefix, printBoard, output);
    SearchForWord(row - 1, col - 1, dict, wordsFound, board, steps, numofsteps, currPrefix, printBoard, output);

    steps[row][col] = 0;
}

