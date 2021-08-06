#include <iostream>
using namespace std;

void cipher(char [], int);
void decipher(char [], int);

int main() {
    char str[100];
    int choice = 1, key = 0;

    while (choice != 0) {
        cout << "Would you like to cipher (1) or decipher (2) a message? (press 0 to end program) " << endl;
        cin >> choice;

        switch (choice) {
            default:
                cout << "No valid option was chosen. Exiting program.";
                break;
            case 0:
                cout << "Program ending.";
                return 0;
            case 1:
                cipher(str, key);
                break;
            case 2:
                decipher(str, key);
                break;
        }
    }
    return 0;
}

void cipher(char str[], int key){
    cin.ignore();
    cout<< "Enter string to cipher: " << endl;
    cin.getline(str, 100);
    cout << "Enter the key used to cipher (1-26): " << endl;
    cin >> key;
    cout << "The ciphered message is: " << endl;

    for (int i = 0; i< strlen(str); i++) {
        if (str[i] == ' ') {
            cout << " ";
            i++;
        }
        str[i] += key;
        if (str[i] > 122) {0

            int rem = str[i] % 122;
            str[i] = (rem + 96);
        }
        cout << str[i];
    }
    cout << "\n\n";
    return;
}

void decipher(char str[], int key) {
    cin.ignore();
    cout<< "Enter string to decipher: " << endl;
    cin.getline(str, 100);
    cout << "Enter the key used to decipher (1-26): " << endl;
    cin >> key;
    cout << "The deciphered message is: " << endl;

    for (int i = 0; i< strlen(str); i++) {
        if (str[i] == ' ') {
            cout << " ";
            i++;
        }
        str[i] -= key;
        if (str[i] < 96) {
            int rem = 96 - str[i];
            str[i] = (122 - rem);
        }
        cout << str[i];
    }
    cout << "\n\n";
    return;
}
    //int choice = 1;


    /*while (choice !=0){
        cout << "---------------------------------------------------------" << endl;
        cout << "Choose one of the following ciphers:" << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "1. Caesar Cipher" << endl;//invertedIndex.h
        cout << "2. Learn index dictionary from multiple files" << endl;//invertedIndex.h
        cout << "3. Load dictionary from a file" << endl; //invertedIndex.h
        cout << "4. Print the index dictionary" << endl;//invertedIndex.h
        cout << "5. Print AVL tree of the dictionary" << endl;//AVL_ADT.h
        cout << "6. Output dictionary to text file" << endl;//invertedIndex.h
        cout << "7. Search for a word with input suggestions" << endl;//AvlTreeExt.h
        cout << "8. Delete low frequency words from dictionary" << endl << endl;//AvlTreeExt.h
        cout << "0. Quit" << endl;
        cout << "---------------------------------------------------------" << endl;

        cin >> choice;

        switch (choice) {
            default:
                cout << "No valid option was chosen. Exiting program.";
                break;
            case 1: learnOneFile();
                cout << "Enter a text file to read (article.txt): ";
                cin >> filename;
                learnOneFile(filename);
                break;
            case 2: learnMulFiles(); break;
            case 3: learnFromFile(); break;
            case 4: printDic(); break;
            case 5: printAVL(); break;
            case 6:
                cout << "Enter a text file to output to (invertedIndex.txt): ";
                cin >> filename;
                outToFile(filename);
                break;
            case 7: matches(); break;
            case 8: deleteNodes(); break;
            case 0: return 0;
        }
    return 0;
}*/
