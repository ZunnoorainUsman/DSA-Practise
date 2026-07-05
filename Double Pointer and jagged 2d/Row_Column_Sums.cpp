#include<iostream>
using namespace std;
int main(){
    int rows,col;
    cin>>rows>>col;
    int** arr=new int*[rows];
    for(int i=0;i<rows;i++) arr[i]=new int[col];
    for(int i=0;i<rows;i++)
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
    for(int i=0;i<rows;i++){
        int sumR=0,sumC=0;
        for(int j=0;j<col;j++){
            sumR+=arr[i][j];
            sumC+=arr[j][i];
        }
        cout<<"sum of row "<<i+1<<" "<<sumR<<endl;
        cout<<"sum of col "<<i+1<<" "<<sumC<<endl;
    }
    for(int i=0;i<rows;i++) delete[] arr[i];
    delete[] arr;
    return 0;
}