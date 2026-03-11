#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char sentence[100];
    char longestWord[50];
    char word[50];

    cout << "Enter a sentence: ";
    cin.getline(sentence, 100);

    int maxLength = 0;
    int wordLength = 0;
    int wordPos = 0;

    for (int i = 0; i <= strlen(sentence); i++)
    {
        if (sentence[i] != ' ' && sentence[i] != '\0')
        {
            word[wordPos++] = sentence[i];
        }
        else
        {
            word[wordPos] = '\0';

            if (wordPos > maxLength)
            {
                maxLength = wordPos;
                strcpy_s(longestWord, word);
            }

            wordPos = 0;
        }
    }
    cout << "Longest word: " << longestWord << endl;

    return 0;
}
