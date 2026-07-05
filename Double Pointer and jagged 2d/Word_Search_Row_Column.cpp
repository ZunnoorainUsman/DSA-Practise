#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int rows,col;
    cin>>rows>>col;
    char** arr=new char*[rows];
    for(int i=0;i<rows;i++) arr[i]=new char[col+1];
    char* target=new char[6];
    cin>>target;
    for(int i=0;i<rows;i++) cin>>arr[i];
    bool found=false;
    int len=strlen(target);
    for(int i=0;i<rows;i++){
        int c=0;
        for(int j=0;j<col;j++) if(arr[i][j]==target[j]) c++;
        if(c==len){
            cout<<"Word found in Row # "<<i+1;
            found=true;
            break;
        }
        c=0;
        for(int j=0;j<col;j++) if(arr[j][i]==target[j]) c++;
        if(c==len){
            cout<<"Word found in Column # "<<i+1;
            found=true;
            break;
        }
    }
    if(!found) cout<<"Word not found";
    delete[] target;
    for(int i=0;i<rows;i++) delete[] arr[i];
    delete[] arr;
    return 0;
}