#include<iostream>
using namespace std;
int main(){
    int rows=4,col=4,x;
    int** arr=new int*[rows];
    for(int i=0;i<rows;i++) arr[i]=new int[col];
    for(int i=0;i<rows;i++)
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
    cin>>x;
    bool found=false;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==x){
                cout<<"Found at ("<<i<<","<<j<<")";
                found=true;
                break;
            }
        }
        if(found) break;
    }
    if(!found) cout<<"Not found";
    for(int i=0;i<rows;i++) delete[] arr[i];
    delete[] arr;
    return 0;
}