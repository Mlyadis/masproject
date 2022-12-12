#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {
	
	private:
		string name;
		long long accnumber;
		char type[10];
		long long amount=0;
		long long tot =0;
		
	
	public:
		void setvalue()
		{
			cout << "Masukan Nama\n";
			cin.ignore();
			
			getline(cin,name);
			
			cout << "Masukan Nomor Akun\n";
			cin >> accnumber;
			cout << "Masukan Tipe Akun\n";
			cin >> type;
			cout << "Masukan Balance\n";
			cin >> tot;
		}
		void showdata()
		{
			cout << "Nama : " << name << endl;
			cout << "Nomor Akun : " << accnumber << endl;
			cout << "Tipe Akun : " << tot <<endl;
		}
		void deposit()
		{
			cout << "\nEnter amount to be Deposited\n";
			cin >> amount;
		}
		void showbal()
		{
			tot = tot + amount ;
			cout << "\nTotal Balance is : "<< tot;
		}
		void withdraw()
		{
			int a, aval_balance;
			cout << "Masukan Jumlah \n";
			cin >> a;
			aval_balance = tot - a;
			cout << "Available balance is " << aval_balance;
		}
		
};
int main()
{
	Bank ke;
	
	int choice;
	
	while(1){
		cout <<"\n.........................."
			 <<"............................"
			 <<".......SELAMAT DATANG......."
			 <<"............................"
			 <<"...........\n\n";
		cout <<"MASUKAN PILIHAN ANDA\n";
		cout << "\t1. Masukan Nama, Jumlah Nominal,Jenis Akun\n";
		cout << "\t2. Informasi Saldo\n";
		cout << "\t3. Uang Deposit\n";
		cout << "\t4. Tampilkan Total Saldo\n";
		cout << "\t5. Ambil Uang\n";
		cout << "\t6. Batal\n";
		cin >> choice;
		
		switch(choice){
		case 1:
			ke.setvalue();
			break;
		case 2:
			ke.showdata();
			break;
		case 3:
			ke.deposit();
			break;
		case 4:
			ke.showbal();
			break;
		case 5:
			ke.withdraw();
			break;
		case 6:
			exit(1);
			break;
		default :
			cout <<"\nInvalid choice";
		}
	}
}

