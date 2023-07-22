#include <iostream>
using namespace std;
class toantu {
	private:
	 	int ts, ms;
	public:
		void nhap();
		void xuat(); 	
}; 
void toantu::nhap(){
	cout <<" nhap tu so ";
	cin>>ts;
	cout <<" nhap mau so ";
	cin>>ms; 
} 
void toantu::xuat() {
	cout << ts << "/"<< ms;
	 
}
int main(){
	toantu x;
	x.nhap();
	x.xuat();
	return 0; 
} 
