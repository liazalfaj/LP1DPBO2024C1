<?php
/*SAya Amelia Zalfa Juianti dengan NIM 2203999 mengerjakan LP1 untuk keberkahannya maka saya
tisak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin*/
class Dpr{
	private $id = '';
	private $nama = '';
	private $bidang = '';
	private $partai = '';

	public function __construct($id = '', $nama = '', $bidang = '', $partai = ''){
		$this->id = $id;
		$this->nama = $nama;
		$this->bidang = $bidang;
		$this->partai = $partai;
	}
	//set ID
	public function setId($id){
		$this->id = $id;
	}

	//get ID
	public function getId(){
		return $this->id;
	}

	//set Nama
	public function setNama($nama){
		$this->nama = $nama;
	}

	//get Nama
	public function getNama(){
		return $this->nama;
	}

	//set bidang
	public function setBidang($bidang){
		$this->bidang = $bidang;
	}

	//get bidang
	public function getBidang(){
		return $this->bidang;
	}

	//set partai
	public function setPartai($partai){
		$this->partai = $partai;
	}

	//get partai
	public function getPartai(){
		return $this->partai;
	}


}
?>
