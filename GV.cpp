#include<bits\stdc++.h>
using namespace std;
class GV{
	private:
		 char ht[30], bc[15], cn[20];
		 int t;
		 float bl,lcb; 
	public:
		void nhap(){
			cin.ignore(); 
			cout<<" Nhap ho ten giao vien: ";
			cin.getline(ht,30);
			cout<<" Nhap bang cap: ";
			cin.getline(bc,15); 
			cout<<" Nhap chuyen nganh: ";
			cin.getline(cn,20);  
			cout<<" Nhap tuoi: ";
			cin>>t;
			cout<<" Nhap bac luong: ";
			cin>>bl; 
			
		};
		
		double Luong(){ 
			lcb=bl*610;
			return lcb; 
		}; 
		void xuat(){	
			cout<<" "<<ht<<" "<<bc<<" "<<cn<<" "<<t<<" "<<bl;
			cout<<" Luong co ban cua giao vien: "<<lcb<<endl; 
		};
		float getLuong(){
			return lcb; 
		}
		char* getCn(){
			return bc; 
		} 
		 
};
bool compare(GV a,GV b){
	return strcmp(a.getCn(),b.getCn())<0; 
} 
int main(){
	int n; 
	cout<<" Nhap so giao vien: ";
	cin>>n; 
	GV a[n];
	for(int i=0;i<n;i++){
		a[i].nhap();
		cout<<" Thong tin giao vien "<<i+1; 
		a[i].Luong(); 
		a[i].xuat();	
	} 
	cout << "\n Danh sach giao vien luong nho hon 2000:\n";
	for(int i=0;i<n;i++){
		if(a[i].getLuong() < 2000){
			a[i].xuat(); 
		} 
	}
	sort(a, a+n, compare);
    cout << "\n Danh sach giao vien sau khi sap xep chuyen nganh:\n";
    for(int i=0; i<n; i++){
		a[i].xuat();
	} 
	return 0;
}
