#include <iostream>
using namespace std;
class GV{
	private :
	 char ht[30], bc[15], cn[20];
	 int t;
	 float bl;
	public : 
		void nhap(){
				cout << " Nhap ten gv ";
				cin.getline(ht,30);
				fflush(stdin);
				cout<< " Nhap tuoi ";
				cin>>this->t;
				cout<< " Nhap bang cap ";
				cin>>bc;
				fflush(stdin);
				cout << " Nhap chuyen nganh ";
				cin>>cn;
				cout << " Nhap bac luong ";
				cin>>this->bl; 	 
				fflush (stdin) ;
} 
		void xuat(){
			cout << " Ho va ten :"<< ht <<endl
				 << " Tuoi :"<<t<<endl
				 << " Bang cap :" << bc <<endl
				 << " Chuyen nganh :"<< cn <<endl
				 << " Bac luong :"<< bl <<endl
				 << " Luong co ban :"<<this-> lcb()<<endl;
				  
}
		float lcb(){
	return this->bl*610 ;
} 
}; 

void nhaptt(GV ds[], int &n) {
	for(int i=0; i<n;i++){
		cout<<"Nhap thong tin cua nguoi thu: "<<i+1<<endl;
		ds[i].nhap() ;
	} 
}
void xuattt(GV ds[], int &n){
	for (int i=0;i<n;i++){
		cout<<"Xuat thong tin cua nguoi thu: "<<i+1<<endl; 
		ds[i].xuat(); 
	} 
} 
void sapxep(GV ds[], int &n){
	cout << " GV có luong nho hon 2000 la " ;
	for(int i=0;i<n;i++){
		if(ds[i].lcb() < 2000){ 
			ds[i].xuat(); 
		} 
	} 
} 
int main(){
	int n;
    cout << "Nhap so luong giao vien: ";
    cin >> n;
    cin.ignore() ;
    GV ds[n];
    nhaptt(ds,n); 
	xuattt(ds,n); 
	sapxep(ds,n);
    return 0; 
}
 
