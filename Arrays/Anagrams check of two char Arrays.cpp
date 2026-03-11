#include <iostream>
using namespace std;
int main() {
    char ch1[100];
    cout << "Enter 1st: ";
    cin.getline(ch1,100);
    
    char ch2[100];
    cout << "Enter 2nd: ";
    cin.getline(ch2,100);
    
    int size = 0;
    while(ch1[size]!='\0')
    {
        size++;
    }
    
    int length = 0;
    for(int i=0; ch1[i]!='\0'; ++i)
    {
        int count=0;
        for(int j=0; ch1[j]!='\0'; ++j)
        {
            if(ch1[i]==ch1[j])
            {
                count++;
            }
        }
        
        int scnd=0;
        for(int k=0; ch2[k]!='\0'; ++k)
        {
            if(ch2[k]==ch1[i])
            {
                scnd++;
            }
        }
        
        if(scnd==count)
        {
            length++;
        }
    }
    
    if(length==size)
    {
        cout << "Anagrams";
    }
    else
    {
        cout << "Not anagrams";  // Changed from "Not" to be more clear
    }
    
    return 0;  // Added missing return
}
