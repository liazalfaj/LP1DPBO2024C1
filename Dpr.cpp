/*Saya Amelia Zalfa Juianti dengan NIM 2203999 mengerjakan LP1 untuk keberkahannya maka saya
tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin*/
#include <iostream>
#include <string>

//using standard namespace
using namespace std;


/*class declaration. For c++, the first letter doesn't have to be
 capitalized, but it's better so we can distinguish it with the other types.*/
class Dpr{
	//private attributes
	private:
	int id;
	string name;
	string bidang;
	string partai;

	//public method
	public:
	//constructors

	//constructors. take nore that it doesn't have any return type
	Dpr(){
		//set name and gender to default value
		this->id = 0000;
		this->name = "";
		this->bidang = "-";
		this->partai = "-";

	}

	//another constructor with parameter. This one will be callled if the
	//object is instanced with the given parameter
	Dpr (int id, string name, string bidang, string partai){
		//"This" object's attributes will be set with the given parameter attributes
		this->id = id;
		this->name = name;
		this->bidang = bidang;
		this->partai = partai;
	}

	/*Getter and settter*/
	//get id
	int get_id(){
		return this->id;
	}

	//set id
	void set_id(int id){
		this->id = id;
	}

	//get name
	string get_name(){
		return this->name;
	}

	//set name
	void set_name(string name){
		this->name = name;
	}

	//get bidang
	string get_bidang(){
		return this->bidang;
	}

	//set bidang
	void set_bidang(string bidang){
		this->bidang = bidang;
	}

	//get partai
	string get_partai(){
		return this->partai;
	}

	//set partai
	void set_partai(string partai){
		this->partai = partai;
	}



	/*public methods, or in this case if you prefer, "behaviours"*/

	//Human eats

	// void eat(){
	// 	cout << this->name << " is eating!" << '\n';
	// }

	// //Human sleeps
	// void sleep(){
	// 	cout << this->name << " is sleeping!" << '\n';
	// }

	//destructors
	//default destructors. Leave it blank for now

	~Dpr(){

	}
};
