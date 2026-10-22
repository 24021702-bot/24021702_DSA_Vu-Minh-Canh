#include <iostream>
using namespace std;
int ucln(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void toigian(int a,int b){
    if(a%b == 0){
        cout << "Phan so toi gian la: "<<a/b;
    }else{
        int a1 = a/ucln(a,b);
        int b1 = b/ucln(a,b);
        cout << "Phan so toi gian la: "<<a1<<"/"<<b1;
    }
}
int main(){
    int a,b;
    cout << "Nhap phan so a/b, a va b lan luot la: ";
    cin >>a;
    cin >>b;
    toigian(a,b);
}
//Độ phức tạp thời gian: T(n)=O(log(min(∣a∣,∣b∣)))
//Bộ nhớ: M(n) = O(1)

