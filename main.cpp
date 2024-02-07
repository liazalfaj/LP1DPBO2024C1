/*SAya Amelia Zalfa Juianti dengan NIM 2203999 mengerjakan LP1 untuk keberkahannya maka saya
tisak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin*/
#include <bits/stdc++.h>
#include "Dpr.cpp"

//using standard namespace
using namespace std;

int main(){
	//default code
	//[Method #1]: object instantiation using default constructor
	Dpr rain;


	//experimental code

	int i, n, o, t = 0;
	int id;
	string name;
	string bidang;
	string partai;

	list<Dpr>llist;
	//The object's attributes, however, should be set manually
	rain.set_id(2203999);
	rain.set_name("Rain");
	rain.set_bidang("KOMISI-II");
	rain.set_partai("PKS");
	llist.push_back(rain);

	//[Method #2]: Object instation using constructor with parameter
	Dpr techi(243768, "Vina", "KOMISI-III", "PKB");
	llist.push_back(techi);
	cout << "DATA : ID|NAMA|BIDANG|PARTAI " << '\n';
	i = 0;
	for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){
		cout << (i + 1) << ". " << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() <<'\n';
		i++;
	}

	while(t == 0){
	cout << "INPUT PERINTAH" << '\n';
	cout << "1 : TAMBAH DATA" << '\n';
	cout << "2 : UBAH DATA" << '\n';
	cout << "3 : HAPUS DATA" << '\n';
	cout << "4 : SELESAI" << '\n';
		cin >> o;
		if(o == 1){
			cout << "MASUKKAN JUMLAH DATA" << '\n';
			cin >> n;
			for(i = 0; i < n; i++){
				//temporary object
				Dpr temp;

				//attribute input
				cout << "TAMBAH DATA : ID|NAMA|BIDANG|PARTAI " << '\n';
				cin >> id >> name >> bidang >> partai;

				//assign input to the temporary object
				temp.set_id(id);
				temp.set_name(name);
				temp.set_bidang(bidang);
				temp.set_partai(partai);

				//insert temporary object into the list.

				llist.push_back(temp);
			}
			cout << "DATA : ID|NAMA|BIDANG|PARTAI " << '\n';
			i = 0;
			for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){
			cout << (i + 1) << ". " << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() <<'\n';
			i++;
			}
			o = 0;
		}else{
			t = 1;
		}
	}

	//output

	//These code will work because we "communicate" with the private attributes
	// cout << '\n' << "Automatic output : " << '\n';
	// cout << "The first Dpr's name is " << rain.get_name() << '\n';
	// cout << "The first human's gender is " << rain.get_gender() <<"\n\n";
	// cout << "The second human's name is " << techi.get_name() <<'\n';
	// cout << "The second human's gender is " << techi.get_gender() << "\n\n";

	//but these code won't because we access their private attributes without any permissions
	
	cout << "DATA : ID|NAMA|BIDANG|PARTAI " << '\n';
	i = 0;
	for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){
		cout << (i + 1) << ". " << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() <<'\n';
		i++;
	}

	return 0;
}
