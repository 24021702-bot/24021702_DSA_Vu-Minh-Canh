#include <iostream>
using namespace std;
void xoaphantu(int a[1000], int n, int k){
    for (int i=k-1;i<n;i++){
        a[i] = a[i+1];
    }
    }
void chenphantu(int a[1000], int n, int x, int k){
    for(int i=n;i>=k;i--){
        a[i] = a[i-1];
    }
    a[k-1] = x;
}
int main(){
    cout << "so phan tu: ";
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for(int i=0;i<n;i++){
        cout << "Phan tu thu "<< i+1<<" la: ";
        cin >> a[i];
    }
}
//Độ phức tạp thời gian: T(n) = O(n)
//Bộ nhớ: M(n) = O(n)
