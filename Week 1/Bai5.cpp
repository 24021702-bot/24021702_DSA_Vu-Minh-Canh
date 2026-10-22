#include <iostream>
using namespace std;
int main(){
    cout << "so phan tu: ";
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for(int i=0;i<n;i++){
        cout << "Phan tu thu "<< i+1<<" la: ";
        cin >> a[i];
        s = s+a[i];
    }
    cout << "Cac phan tu lon hon hoặc bang gia tri trung binh la: "<<endl;
    double tb= (double)s/n;
    for(int j=0;j<n;j++){
        if(a[j]>=tb){
            cout << a[j] << endl;
        }
    }

}
//Độ phức tạp thời gian: T(n) = O(n)
//Bộ nhớ: M(n) = O(n)
