#include <iostream>
using namespace std;

int myStrLen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

char* deepCopy(const char* str) {
    if (str == nullptr) return nullptr;

    int len = myStrLen(str);
    char* newStr = new char[len + 1];

    for (int i = 0; i <= len; i++) {
        newStr[i] = str[i];
    }

    return newStr;
}
int countTokens(const char* sentence) {
    if (sentence == nullptr || sentence[0] == '\0') return 0;

    int count = 0;
    bool inToken = false;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ') {
            if (!inToken) {
                count++;
                inToken = true;
            }
        }
        else {
            inToken = false;
        }
    }
    return count;
}

char* growArray(char* oldArray, int& currentSize, int newSize) {
    char* newArray = new char[newSize];

    for (int i = 0; i < currentSize; i++) {
        newArray[i] = oldArray[i];
    }

    delete[] oldArray;
    currentSize = newSize;
    return newArray;
}

char* inputSentence() {
    int capacity = 1;
    int length = 0;
    char* sentence = new char[capacity];

    cout << "Enter a sentence: ";

    char ch;
    while (cin.get(ch) && ch != '\n') {
        if (length >= capacity - 1) {
            // Grow by 1 character (not doubling)
            capacity++;
            sentence = growArray(sentence, capacity, capacity);
        }
        sentence[length++] = ch;
    }

    sentence[length] = '\0';
    return sentence;
}

char* RemoveSmallTokens(char* sentence) {
    if (sentence == nullptr) return nullptr;

    int newCapacity = 1;
    char* newSentence = new char[newCapacity];
    newSentence[0] = '\0';
    int newLength = 0;

    int i = 0;
    int len = myStrLen(sentence);

    while (i < len) {
        // Skip spaces
        while (i < len && sentence[i] == ' ') {
            i++;
        }

        if (i >= len) break;

        // Found start of a token
        int start = i;
        while (i < len && sentence[i] != ' ') {
            i++;
        }
        int end = i;

        int tokenLen = end - start;

        // Only keep tokens longer than 3 characters
        if (tokenLen > 3) {
            // Add space before token if this is not the first token
            if (newLength > 0) {
                // Grow array if needed
                if (newLength + 1 >= newCapacity) {
                    newCapacity = newLength + 2;
                    char* temp = new char[newCapacity];
                    for (int j = 0; j <= newLength; j++) {
                        temp[j] = newSentence[j];
                    }
                    delete[] newSentence;
                    newSentence = temp;
                }
                newSentence[newLength++] = ' ';
                newSentence[newLength] = '\0';
            }

            // Grow array for token
            while (newLength + tokenLen + 1 > newCapacity) {
                newCapacity = newLength + tokenLen + 2;
                char* temp = new char[newCapacity];
                for (int j = 0; j <= newLength; j++) {
                    temp[j] = newSentence[j];
                }
                delete[] newSentence;
                newSentence = temp;
            }

            // Copy token
            for (int j = 0; j < tokenLen; j++) {
                newSentence[newLength + j] = sentence[start + j];
            }
            newLength += tokenLen;
            newSentence[newLength] = '\0';
        }
    }

    delete[] sentence;    
    return deepCopy(newSentence);
}

void printTokens(char* str) {
    if (str == nullptr || str[0] == '\0') {
        cout << "No tokens to display." << endl;
        return;
    }

    int tokenNum = 1;
    int i = 0;
    int len = myStrLen(str);

    while (i < len) {
        // Skip spaces
        while (i < len && str[i] == ' ') {
            i++;
        }

        if (i >= len) break;

        // Found start of token
        int start = i;
        while (i < len && str[i] != ' ') {
            i++;
        }
        int end = i;

        // Print token
        cout << "Token " << tokenNum << ": ";
        for (int j = start; j < end; j++) {
            cout << str[j];
        }
        cout << " (length = " << (end - start) << ")" << endl;

        tokenNum++;
    }
}
void freeMemory(char* str) {
    delete[] str;
}

int main() {
  
    char* sentence = inputSentence();

    // Remove small tokens and get new sentence
    char* filteredSentence = RemoveSmallTokens(sentence);
    int remainingTokens = countTokens(filteredSentence);
    cout << "\nSentence without small tokens: ";
    for (int i = 0; filteredSentence[i] != '\0'; i++) {
        cout << filteredSentence[i];
    }
    cout << endl;
    cout << "Total remaining Tokens: " << remainingTokens << endl;
    cout << endl;
    printTokens(filteredSentence);
    freeMemory(filteredSentence);

    return 0;
}
