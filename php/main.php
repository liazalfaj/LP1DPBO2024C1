<?php
//SAya Amelia Zalfa Juianti dengan NIM 2203999 mengerjakan LP1 untuk keberkahannya maka saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin
require ('Dpr.php');
$human1 = new Dpr(2203999, 'Amelia', 'KOMISI-V', 'PKS');
echo $human1->getId();
echo $human1->getNama();
echo '<br>';
echo $human1->getBidang();
echo '<br>';
echo $human1->getPartai();
echo '<hr>';

echo "   ID    |   Nama   |   Bidang   | Partai | foto profil";
echo "<br>";
echo $human1->getId() . " | " . $human1->getNama() . " | " . $human1->getBidang() . " | " . $human1->getPartai() . " | " . '<img src="icon.jpg" width="100">';

echo "<br>";
echo "<br>";
echo "Menambahkan data";
echo "<br>";
//menambahkan data anggota DPR
$human2 = new Dpr(2204789, 'Zalfa', 'KOMISI-III', 'NASDEM');
$human3 = new Dpr(2206734, 'July', 'KOMISI-IV', 'PDIP');
$human4 = new Dpr(2206783, 'Kiranti', 'KOMISI-I', 'PAN');
echo "   ID    |   Nama   |   Bidang   | Partai | foto profil";
echo "<br>";
echo $human1->getId() . " | " . $human1->getNama() . " | " . $human1->getBidang() . " | " . $human1->getPartai() . " | " . '<img src="icon.jpg" width="100">';
echo "<br>";
echo $human2->getId() . " | " . $human2->getNama() . " | " . $human2->getBidang() . " | " . $human2->getPartai() . " | " . '<img src="icon.jpg" width="100">';
echo "<br>";
echo $human3->getId() . " | " . $human3->getNama() . " | " . $human3->getBidang() . " | " . $human3->getPartai() . " | " . '<img src="icon.jpg" width="100">';
echo "<br>";
echo $human4->getId() . " | " . $human4->getNama() . " | " . $human4->getBidang() . " | " . $human4->getPartai() . " | " . '<img src="icon.jpg" width="100">';
echo "<br>";
echo "<br>";
//menghapus data anggota DPR menggunakan unset
echo "Menghapus data";
echo "<br>";
unset($human4);
unset($human3);
echo "   ID    |   Nama   |   Bidang   | Partai | foto profil";
echo "<br>";
echo $human1->getId() . " | " . $human1->getNama() . " | " . $human1->getBidang() . " | " . $human1->getPartai() . " | " . '<img src="icon.jpg" width="100>';
echo "<br>";
echo $human2->getId() . " | " . $human2->getNama() . " | " . $human2->getBidang() . " | " . $human2->getPartai() . " | " . '<img src="icon.jpg" width="100">';
echo "<br>";
echo $human3->getId() . " | " . $human3->getNama() . " | " . $human3->getBidang() . " | " . $human3->getPartai() . " | " . '<img src="icon.jpg" width="100">';
echo "<br>";
echo $human4->getId() . " | " . $human4->getNama() . " | " . $human4->getBidang() . " | " . $human4->getPartai() . " | ". '<img src="icon.jpg" width="100">';
echo "<br>";
echo "<br>";
echo "Edit data";
echo "<br>";
//edit data anggota DPR
$human2->setNama('Zalia');
echo $human2->getNama();
echo "   ID    |   Nama   |   Bidang   | Partai | foto profil";
echo "<br>";
echo $human1->getId() . " | " . $human1->getNama() . " | " . $human1->getBidang() . " | " . $human1->getPartai() . " | " . '<img src="icon.jpg" width="100">';
echo "<br>";
echo $human2->getId() . " | " . $human2->getNama() . " | " . $human2->getBidang() . " | " . $human2->getPartai() . " | " . '<img src="icon.jpg" width="100">';
echo "<br>";


?>

