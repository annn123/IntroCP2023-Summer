#include <iostream>

using namespace std;

int main()
{
    int a[1000][1000];
    int h,w,b;
    int halfh,halfw;
    int ta=0,tb=0,tc=0,td=0;
    cin>>w>>h;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
    }
    
    halfh=h/2;
    halfw=w/2;
    
    
    for(int i=0;i<halfh;i++){
        for(int j=0;j<halfw;j++){
            ta=ta+a[i][j];
        }
    }
    for(int i=0;i<halfh;i++){
        for(int j=halfw;j<w;j++){
            tb=tb+a[i][j];
        }
    }
    for(int i=halfh;i<h;i++){
        for(int j=0;j<halfw;j++){
            tc=tc+a[i][j];
        }
    }
    for(int i=halfh;i<h;i++){
        for(int j=halfw;j<w;j++){
            td=td+a[i][j];
        }
    }
    
    b=halfh*halfw;
    
    cout<<ta/b<<" "<<tb/b<<endl;
    cout<<tc/b<<" "<<td/b<<endl;
    
}
