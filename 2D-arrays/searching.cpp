#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }  

    int x;
    cin >> x;
    bool flag = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == x){
                cout << i << " " << j << endl;
                flag = 1;
            }
        }
    }

    if(flag){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}

