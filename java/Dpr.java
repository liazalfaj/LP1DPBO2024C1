/*SAya Amelia Zalfa Juianti dengan NIM 2203999 mengerjakan LP1 untuk keberkahannya maka saya
tisak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin*/
public class Dpr{
	//private attributes
	private String id;
	private String nama;
	private String bidang;
	private String partai;

	public Dpr(){
		this.id = "";
		this.nama = "";
		this.bidang = "";
		this.partai = "";
	}

	public Dpr(String id, String nama, String bidang, String partai){
		this.id = id;
		this.nama = nama;
		this.bidang = bidang;
		this.partai = partai;
	}

	/*Getter and Setter */

	//Get id

	public String getId(){
		return this.id;
	}

	//set id

	public void setId(String id){
		this.id = id;
	}

	//Get nama
	public String getNama(){
		return this.nama;
	}

	//set nama
	public void setNama(String nama){
		this.nama = nama;
	}

	//get bidang
	public String getBidang(){
		return this.bidang;
	}

	//set bidang
	public void setBidang(String bidang){
		this.bidang = bidang;
	}

	//get partai
	public String getPartai(){
		return this.partai;
	}

	//set partai
	public void setPartai(String partai){
		this.partai = partai;
	}


}
