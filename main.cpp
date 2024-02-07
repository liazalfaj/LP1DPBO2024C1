/*Saya Amelia Zalfa Juianti dengan NIM 2203999 mengerjakan LP1 untuk keberkahannya maka saya
tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin*/
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
	cout << "DATA ANGGOTA DPR" << '\n';
	i = 0;
	for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){
		cout << (i + 1) << ". " << "ID : "<< it->get_id() << '\n';
		cout << "   " <<"Nama : " << it->get_name() << '\n';
		cout << "   " <<"Bidang : " << it->get_bidang() << '\n';
		cout << "   " <<"Partai : " << it->get_partai() << '\n';
		i++;
	}

	while(t == 0){//selama tanda sama dengan 0
	cout << "INPUT PERINTAH" << '\n';
	cout << "1 : TAMBAH DATA" << '\n';
	cout << "2 : UBAH DATA" << '\n';
	cout << "3 : HAPUS DATA" << '\n';
	cout << "4 : SELESAI" << '\n';
		cin >> o;
		if(o == 1){//jika perintah sama dengan 1
		//menambahkan data
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

			//output
			cout << "DATA ANGGOTA DPR" << '\n';
			i = 0;
			for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){
				cout << (i + 1) << ". " << "ID : "<< it->get_id() << '\n';
				cout << "   " <<"Nama : " << it->get_name() << '\n';
				cout << "   " <<"Bidang : " << it->get_bidang() << '\n';
				cout << "   " <<"Partai : " << it->get_partai() << '\n';
				i++;
			}
			o = 0;
		}else if(o == 2){//jika masukan perintah adalah 2
		//masukkan urutan data
			cout << "MASUKKAN NOMOR DATA" << '\n';
			int cariid;
			cin >> cariid;
			i = 0;
			for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){
				if((i + 1) == cariid){//jika indeks sama dengan urutan data
					cout << "PILIH" << '\n' << "1. ID" << '\n' << "2. NAMA" << '\n' << "3. BIDANG" << '\n' << "4. PARTAI" << '\n'<< "5. ALL" << '\n';
					int pilih;
					cin >> pilih;
						Dpr temp;
						if(pilih == 5){//jika pilih adalah 5
						//ubah semua data
						cout << "UBAH DATA : ID | NAMA | BIDANG | PARTAI" << '\n';
						cin >> id >> name >> bidang >> partai;
						it->set_id(id);
						it->set_name(name);
						it->set_bidang(bidang);
						it->set_partai(partai);
						}else if(pilih == 4){//jika piliha dalah 4
						//ubah data partai
							cout << "UBAH DATA PARTAI" << '\n';
							cin >> partai;
							it->set_partai(partai);
						}else if(pilih == 3){//jika pilih adalah 3
						//ubah data bidang
							cout << "UBAH DATA BIDANG" << '\n';
							cin >> bidang;
							it->set_bidang(bidang);
						}else if(pilih == 2){//jika pilih adalah 2
						//ubah data nama
							cout << "UBAH DATA NAMA" << '\n';
							cin >> name;
							it->set_name(name);
						}else if(pilih == 1){//jika pilih adalah 1
						//ubah data id
							cout << "UBAH DATA ID" << '\n';
							cin >> id;
							it->set_id(id);
						}

					}
					i++;
				}
				
				//output
				cout << "DATA ANGGOTA DPR" << '\n';
					i = 0;
					for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){
						cout << (i + 1) << ". " << "ID : "<< it->get_id() << '\n';
						cout << "   " <<"Nama : " << it->get_name() << '\n';
						cout << "   " <<"Bidang : " << it->get_bidang() << '\n';
						cout << "   " <<"Partai : " << it->get_partai() << '\n';
						i++;
					}
				o = 0;
		}else if(o == 3){
			//memasukkan nomor urutan data
			cout << "MASUKKAN NOMOR DATA" << '\n';
			int cariid;
			cin >> cariid;
			i = 0;
			for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){
				if((i + 1) == cariid){
					if(!llist.empty()){
						llist.erase(llist.begin());
					}
				}
				i++;
			}
			
			//output
			cout << "DATA ANGGOTA DPR" << '\n';
			i = 0;
			for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){
				cout << (i + 1) << ". " << "ID : "<< it->get_id() << '\n';
				cout << "   " <<"Nama : " << it->get_name() << '\n';
				cout << "   " <<"Bidang : " << it->get_bidang() << '\n';
				cout << "   " <<"Partai : " << it->get_partai() << '\n';
				i++;
			}
		}else{
			//set tanda menjadi 1
			t = 1;
		}
	}

	//but these code won't because we access their private attributes without any permissions
	
	cout << "DATA ANGGOTA DPR" << '\n';
	i = 0;
	for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){
		cout << (i + 1) << ". " << "ID : "<< it->get_id() << '\n';
		cout << "   " <<"Nama : " << it->get_name() << '\n';
		cout << "   " <<"Bidang : " << it->get_bidang() << '\n';
		cout << "   " <<"Partai : " << it->get_partai() << '\n';
		i++;
	}

	return 0;
}
