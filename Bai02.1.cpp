#include<bits/stdc++.h>
using namespace std;

class NSX{
	char tenNSX[20];
	char diaChi[20];
	
	public:
		void nhap(){
			cout<<"ten nsx: "; fflush(stdin);gets(tenNSX);
			cout<<endl<<"dia chi: ";fflush(stdin);gets(diaChi);
		}
		
		void xuat(){
			cout<<tenNSX<<setw(10)<<diaChi;
		}
		
		friend class HANG;
};

class HANG{
	
	protected:
		char tenHang[20];
		NSX x;
		int donGia;
	
	public:
		void nhap(){
			cout<<"ten hang: "; gets(tenHang);
			cout<<endl<<"Nha san xuat: ";x.nhap();
			cout<<endl<<"don gia: "; cin>>donGia;
		}
		
		void xuat(){
			cout<<tenHang<<setw(10);
			x.xuat();
			cout<<setw(10)<<donGia;
		}
		
		HANG(){
			strcpy(tenHang,"no name");
			//su dung thuoc tinh cua lop nha SX nen phai dung friend class o lop NSX
			strcpy(x.tenNSX,"no NSX");
			strcpy(x.diaChi,"No address");
			donGia = 0;
		}
};

class DATE{
	int d,m,y;
	public:
		void nhap(){
			cout<<"ngay: ";cin>>d;
			cout<<"\nthang: ";cin>>m;
			cout<<"\nnam: ";cin>>y;
		}
		
		void xuat(){
			cout<<d<<"/"<<m<<"/"<<y;
		}
};

class TIVI:public HANG{
	public:
		int kichThuoc;
		DATE ngayNhap;
		
	void nhap(){
		cout<<"ten hang: ";cin>>tenHang;
		cout<<"\nnha sx: "<<endl; x.nhap();
		cout<<"\ndon gia: ";cin>>donGia;
		cout<<"\nkich thuoc: ";cin>>kichThuoc;
		cout<<"\nNgay nhap: "<<endl; ngayNhap.nhap();
	}
	
	void xuat(){
		cout<<tenHang<<setw(10);
		x.xuat();
		cout<<setw(10)<<donGia<<setw(10)<<kichThuoc<<setw(10);
		ngayNhap.xuat();
		
	}
};

int main(){
	TIVI a;
	a.nhap();
	a.xuat();
}

