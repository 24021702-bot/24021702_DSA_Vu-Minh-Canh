#include <iostream>
using namespace std;
int main(){
    int n,a[1000];
    int i = 0;
    int s = 0;
    cout << "So phan tu: ";
    cin >> n;
    while(i < n){
        cout << "Gia tri phan tu thu " <<i+1 <<" la: ";
        cin >>a[i];
        i++;
    }
    for(int j =0;j<i;j++){
        s = s+a[j];
    }
    cout << s;
}
//Độ phức tạp thời gian: T(n) = O(n)
//Bộ nhớ: M(n) = O(1)
