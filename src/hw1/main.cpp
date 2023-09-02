#include <iostream>

using namespace std;

int main()
{
    int a[1000][1000];
    int h,w,b;
    int t=0;
    cin>>w>>h;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
            t=t+a[i][j];
        }
    }
    b=h*w;
    cout<<t/b;
}