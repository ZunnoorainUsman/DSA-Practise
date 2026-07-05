#include<iostream>
using namespace std;
void input(int** arr,int rows,int col){
    for(int i=0;i<rows;i++)
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
}
int sum(int** arr,int rows,int col){
    int s=0;
    for(int i=0;i<rows;i++)
        for(int j=0;j<col;j++)
            s+=arr[i][j];
    return s;
}
int main(){
    int rows,col;
    cin>>rows>>col;
    int** arr=new int*[rows];
    for(int i=0;i<rows;i++) arr[i]=new int[col];
    input(arr,rows,col);
    cout<<sum(arr,rows,col);
    for(int i=0;i<rows;i++) delete[] arr[i];
    delete[] arr;
    return 0;
}