#SAya Amelia Zalfa Juianti dengan NIM 2203999 mengerjakan LP1 untuk keberkahannya maka saya
#tisak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin
#class declaration
class Dpr:
    __id = -1
    __nama = ""
	__bidang = ""
    __partai = ""

	def __init__(self, id = 0, nama = "", bidang = "", partai = ""):
		self.__id = id
		self.__nama = nama
		self.__bidang = bidang
		self.__partai = partai

	#Getter and Setter

		#get ID
		def get_id(self):
			return self.__id
		#set id
		def set_id(self, id):
			self.__id = id

		#get name
			def get_nama(self):
		#set name
			def set_nama(self, nama):
				self.__nama = nama
		
		#get bidang
			def get_bidang(self):
		#set bidang
			def set_bidang(self, bidang):
				self.__bidang = bidang
		
		#get partai
			def get_partai(self):
		#set partai
			def set_partai(self, partai):
				self.__partai = partai
			
				
				    
