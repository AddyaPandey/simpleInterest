// print this pattern
//1234
//1234
//1234
//1234

#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

int row=1;
while(row<=n) {

int column=1;
while(column<=n) {

cout<<column;
column=column+1;

}
cout<<endl;
row=row+1;
}
}        