#include<bits\stdc++.h>
using namespace std;
class HCN {
    private:
        double dai, rong;
    public:
        void nhap() {
            cout << "Nhap chieu dai: ";
            cin >> dai;
            cout << "Nhap chieu rong: ";
            cin >> rong;
        }
        double chuvi() {
            return (dai + rong) * 2;
        }
        double dientich(){
        	return dai*rong; 
		}        
        
};
bool compare(HCN a,HCN b){
        	return a.chuvi() > b.chuvi();
		} 
int main() {
    HCN a[5];
    double max = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Nhap thong tin hinh chu nhat thu " << i+1 << ":\n";
        a[i].nhap();
        double p = a[i].dientich();
        if(p > max) {
            max = p;
        }
	
}
    sort(a, a+5, compare);
    cout << "Gia tri lon nhat cua chu vi cac hinh chu nhat la: " << max<< "\n";
    cout << "Chu vi cac hinh chu nhat theo thu tu giam dan la:";
    for(int i = 0; i < 5; i++) {
        cout << a[i].chuvi()<<" ";
    }
    return 0;
}
