/*SAya Amelia Zalfa Juianti dengan NIM 2203999 mengerjakan LP1 untuk keberkahannya maka saya
tisak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin*/
import java.util.Scanner;
import java.util.ArrayList;

public class Main{
	public static void main(String[] args){
		Dpr rain = new Dpr();
		rain.setId(id:"2203999");
		rain.setNama(nama:"Rain");
		rain.setBidang(bidang: "KOMISI-IV");
		rain.setPartai(partai:"PDIP");

		Dpr techi = new Dpr(id:"2203488", nama:"Techi", bidang:"KOMISI-V", partai:"PKS");

		int i, n = 0;
		String id;
		String nama;
		String bidang;
		String partai;
		
		ArrayList<Dpr> list = new ArrayList<>();

		Scanner sc = new Scanner(System.in);
		//masukan jumlah data yg ingin diinput
		try{
			n = sc.nextInt();
		}
		catch(Exception e){
			System.out.println(x:"The input is not an integer!");
		}
		
		//iterasi masukan data anggota dpr
		for(i = 0; i < n; i++){
			id = sc.next();
			nama = sc.next();
			bidang = sc.next();
			partai = sc.next().charAt(index: 0);

			Dpr temp = new Dpr();
			temp.setId(id); temp.setNama(nama); temp.setBidang(bidang); temp.setPartai(partai); 
		}

	}

}
