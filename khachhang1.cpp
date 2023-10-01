#include<bits\stdc++.h>
using namespace std;
struct NS{
	int ngay;
    int thang;
    int nam;
};
class KH{
	private:
		 char ht[30], cmnd[10], k[50];
		 NS ns; 
	public:
		void nhap(){
			cin.ignore(); 
			cout<<" Nhap ho ten khach hang: ";
			cin.getline(ht,30);
			cout<<" Nhap ngay thang nam sinh: ";
			cin>>ns.ngay;
			cin>>ns.thang;
			cin>>ns.nam;  
			cin.ignore(); 
			cout<<" Nhap ho khau: ";
			cin.getline(k,50); 
			cout<<" Nhap so chung minh: ";
			cin.getline(cmnd,10);
			
		};
		void xuat(){
			
			cout<<" "<<ht<<" "<<cmnd<<" "<<ns.ngay<<"/"<<ns.thang<<"/"<<ns.nam<<" "<<k<<endl; 
		};
		char* getHoten(){
			return ht; 
	    }
	    NS getNgaysinh(){
	    	return ns; 
		} 
};

bool compare(KH a, KH b) {
    return strcmp(a.getHoten(), b.getHoten()) < 0;
}

int main(){
	int n; 
	cout<<" Nhap so luong khach hang: ";
	cin>>n; 
	KH a[n];
	for(int i=0;i<n;i++){
		a[i].nhap();
		cout<<" Thong tin khach hang "<<i+1; 
		a[i].xuat();
	} 
	sort(a, a+n, compare);
    cout << "\n Danh sach khach hang sau khi sap xep theo ten:\n";
    for(int i=0; i<n; i++){
		a[i].xuat();
	}
	cout << "\n Danh sach khach hang co sinh nhat thang 12:\n";
	for(int i=0;i<n;i++){
		if(a[i].getNgaysinh().thang == 12){
			a[i].xuat(); 
		} 
	} 
	return 0;
}
