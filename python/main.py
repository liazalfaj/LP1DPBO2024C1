#SAya Amelia Zalfa Juianti dengan NIM 2203999 mengerjakan LP1 untuk keberkahannya maka saya
#tisak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin
from Dpr import Dpr

rain = Dpr("2203999", "Amelia", "KOMISI-I", "PKS")
techi = Dpr("2203789", "Techi", "KOMISI-V", "PDIP")

dprs = []

n = int(input("Enter the number of DPRs: "))

for i in range(n):
    id = int(input("Masukkan ID: "))
    nama = input("Masukkan nama: ")
    bidang = input("Masukkan bidang: ")
    partai = input("Masukkan partai: ")

    dprs.append(Dpr(id, nama, bidang, partai))

	i = 0;
    print()
	print("     ID     |   Nama   |   Bidang   |   Partai   |")
	for dpr in dprs:
		print(str(i + 1) + ".", dpr.get_id(), "|", dpr.get_nama(), "|", dpr.get_bidang(), "|", dpr.get_partai())
		i+=1
		

