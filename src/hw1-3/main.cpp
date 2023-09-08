#include <iostream>

using namespace std;

int main(){
    int height, widght, n, a;
    cin >> widght >> height >> n;
    int array[height][widght];
    
    for(int i=0;i < height;i++){
        for(int j=0;j < widght;j++){
            cin >> array[i][j];
        }
    }
    
    for(int i=0;i<height;i+=n){
        for(int j=0;j<widght;j+=n){
            a=0;
            for(int ik=0;ik<n;ik++){
                for(int jk=0;jk<n;jk++){
                    a=a+array[i+ik][j+jk];
                }
            }
            cout<<a/(n*n)<<" ";
        }cout<<endl;
    }
}
    
    

