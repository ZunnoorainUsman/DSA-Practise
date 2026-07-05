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
        int maxR=arr[i][0],maxC=arr[0][i];
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxR) maxR=arr[i][j];
            if(arr[j][i]>maxC) maxC=arr[j][i];
        }
        cout<<"max of row "<<i+1<<" : "<<maxR<<endl;
        cout<<"max of col "<<i+1<<" : "<<maxC<<endl;
    }
    for(int i=0;i<rows;i++) delete[] arr[i];
    delete[] arr;
    return 0;
}