#include <iostream>
using namespace std;
int tinhtong(int a[1000][1000], int m, int n){
    int s =0;
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            s = s+a[i][j];
        }
    }
    return s;
}
void xoadong(int a[1000][1000],int m, int n, int k){
    for(int i=(k-1);i<m-1;i++){
        for(int j =0;j<n;j++){
            a[i][j] = a[i+1][j];
        }
    }
}
int main(){
    int m,n;
    cout <<"Kich thuoc cua ma tran la: ";
    cin>>m;
    cin >>n;
    int a[1000][1000];
    cout << "Nhap cac phan tu: ";
    for(int i =0;i <m;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
    }
}
//Độ phức tạp thời gian: T(n) = O(mn)
//Bộ nhớ: M(n) = O(1)
