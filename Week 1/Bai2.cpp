#include <iostream>
using namespace std;
void xapxeptangdan(int a[100],int n){
    for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int s = a[i];
                a[i] = a[j];
                a[j] = s;
            }
        }
    }
}
int main(){
    cout << "so phan tu: ";
    int n =0;
    cin >>n;
    int a[n];
    for(int i=0; i<n;i++){
        cout << "Phan tu thu: "<<i+1;
        cin >>a[i];
    }
}
//Độ phức tạp thời gian: T(n) = O(n^2)
//Bộ nhớ: M(n) = O(1)
