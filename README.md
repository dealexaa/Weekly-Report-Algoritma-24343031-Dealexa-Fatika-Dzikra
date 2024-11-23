<!-- PROJECT LOGO -->
<a id="readme-top"></a>
<br />
<div align="center">
  <a href="https://github.com/github_username/repo_name">
    <img src="1.1.png" alt="Logo" width="80" height="80">
  </a>

<h3 align="center">WEEKLY REPORT ALGORITMA PEMROGRAMAN</h3>

  <p align="center">
   NAMA : DEALEXA FATIKA DZIKRA<br>
   NIM  : 24343031
    
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>

1. [JOB SHEET 1](https://github.com/dealexaa/Weekly-Report-Algoritma-24343031-Dealexa-Fatika-Dzikra/edit/main/README.md#job-sheet-1-pengantar-algoritma-dan-pemrograman)
2. [Requirements](#requirements)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Code Explanation](#code-explanation)
6. [Conclusion](#conclusion)


<!-- ABOUT THE PROJECT -->
## JOB SHEET 1-Pengantar Algoritma dan Pemrograman
<div>
<h3 align="left">Latihan 1 : Pengertian Algoritma, Pemrograman, Program, Programmer, dan IDE</h3>
  <p>
  <b>Algoritma</b> adalah urutan langkah-langkah yang disusun secara sistematis dan
logis untuk menyelesaikan suatu masalah atau mencapai suatu tujuan tertentu.
Sebuah algoritma mempunyai awal dan akhir. <br>
 Algoritma adalah jantung ilmu komputer atau informatika. Banyak cabang
ilmu komputer yang di acu dalam terminologi algoritma. Namun, jangan
beranggapan algoritma selalu identik dengan ilmu komputer saja. Dalam
kehidupan sehari-hari pun banyak terdapat proses yang dinyatakan dalam
suatu algoritma. Berikut adalah beberapa contoh algoritma dalam kehidupan
sehari-hari :
<img src="1.1.png" alt="ss" width="400" height="400"><br>
<p><b>Pemrograman</b> bisa diartikan sebuah tindakan atau aktivitas penulisan,
menguji, memperbaiki, dan memelihara kode yang dipahami oleh komputer.
Pemrograman adalah proses penulisan kode menjadi sebuah program.Sementara orang yang melakukan pemrograman disebut dengan <b>programmer</b>,
sedangkan <b>program</b> adalah produk dari proses pemrograman yang dilakukan.</p>
<br><b>IDE atau Integrated Development Environment</b> adalah software atau
perangkat lunak yang digunakan oleh programmer untuk membuat sebuah
program komputer atau sebagai tempat pengembangan aplikasi. Berbeda
dengan text editor seperti notepad, IDE merupakan text editor yang memiliki
compiler dan debugger sekaligus sehingga memungkinkan sebuah program
dapat ditulis, diuji, dan dijalankan dalam satu aplikasi. IDE memiliki banyak
fitur yang mendukung proses pemrograman. Contohnya adalah DevC++,
Microsoft Visual Studio, CodeBlocks, NetBeans, Eclips, dll.    
  </p>
</div>
<div>
  <h3 align="left">Latihan 2 : Melakukan instalasi IDE</h3>
  Anda bisa memilih diantara IDE berikut :<br>
➢ DevC++<br>
➢ Visual Studio Code<br>
➢ CodeBlocks<br>
  Tetapi pada program ini saya menggunakan Visual Studio Code,Berikut cara instalasinya :<br>
  1.Unduh Visual Studio Code dari <a href="https://code.visualstudio.com/download"> tautan resmi.</a><br>
  2.Instal sesuai instruksi pada layar.<br>
  3.Pastikan compiler seperti MinGW terpasang.<br>
</div>
<div>
  <h3 align="left">Latihan 3 : Program "Hello World"</h3>
  
  <p>
    <b>Deskipsi Program</b><br>
    Program sederhana dalam bahasa C yang mencetak pesan ke konsol menggunakan fungsi printf.<br>
    <img src="1.1.png" alt="ss" width="200" height="200"><br>
   <b>Penjelasan Tiap Baris</b><br>
1. #include < stdio.h > <br>
   Memasukkan pustaka standar untuk operasi input dan output, seperti printf.<br>
2. int main()<br>
   Fungsi utama tempat program dimulai.<br>
3. printf("Hello World!\n");<br>
   Perintah untuk mencetak teks "Hello World!" ke layar. Tanda \n membuat program pindah ke baris baru setelah mencetak.<br>
4. return 0;<br>
   Mengakhiri program dengan status sukses (kode 0).<br>

 
  </p>
</div>

## JOB SHEET 2-Pemograman Dasar C
<div>
<h3 align="left">Latihan 1 : Program "Selamat Datang dalam Pemograman C!"</h3>
  <img src="1.1.png" alt="ss" width="200" height="200"><br>
  
  <b>Deskripsi Program</b><br>
Program ini adalah aplikasi sederhana yang dibuat dengan bahasa C. Program ini bertujuan untuk menyapa pengguna dengan menampilkan pesan selamat datang yang ditampilkan berdasarkan nama lengkap yang dimasukkan oleh pengguna.Program akan menampilkan pesan “Selamat Datang <nama> dalam
Pemrograman C!” 

<b>Fitur</b><br>
     - Input Nama Lengkap: Program meminta pengguna untuk memasukkan nama lengkap mereka.<br>
     - Output: Program menampilkan pesan selamat datang khusus menggunakan nama pengguna yang telah dimasukkan.
  
<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Program menggunakan pustaka stdio.h untuk mengakses fungsi input-output seperti printf dan scanf.<br>
2. Variabel<br>
   char name[50]; : Sebuah array karakter untuk menyimpan nama lengkap pengguna hingga 50 karakter.<br>
3. Alur Program
   - Program menampilkan pesan untuk meminta pengguna memasukkan nama lengkap.<br>
   - Nama lengkap yang dimasukkan pengguna disimpan dalam variabel name menggunakan scanf.<br>
   - Program menampilkan pesan selamat datang yang memuat nama pengguna.<br>   
  
</div>
<div>
 <div>
<h3 align="left">Latihan 2 : Program Menentukan Nilai Akhir Mahasiswa</h3>
  <img src="1.1.png" alt="ss" width="200" height="200"><br>
  
  <b>Deskripsi Program</b><br>
Program ini adalah aplikasi sederhana yang memungkinkan pengguna untuk:<br>
1. Memasukkan informasi pribadi (Nama, NIM, Program Studi, dan Fakultas).
2. Memasukkan nilai praktikum, UTS, dan UAS.
3. Menghitung nilai akhir berdasarkan bobot:
   - 30% untuk nilai praktikum,
   - 30% untuk nilai UTS,
   - 40% untuk nilai UAS.
Program ini kemudian menampilkan informasi lengkap beserta nilai akhir pengguna.

<b>Fitur</b><br>
1. Input Data Pribadi:<br>
    -  Nama Mahasiswa<br>
    -  NIM<br>
    -  Program Studi<br>
    - Fakultas<br>
2. Input Nilai Akademik:<br>
    -  Nilai Praktikum<br>
    -  Nilai UTS<br>
    -  Nilai UAS<br>
3. Perhitungan Nilai Akhir:<br>
   Menggunakan rumus berikut :<br> 
   nilaiAkhir = (0.3 * praktikum) + (0.3 * uts) + (0.4 * uas); <br>
4. Output yang Informatif:<br>
   Menampilkan informasi lengkap (Nama, NIM, Prodi, Fakultas) dan nilai mahasiswa dan Nilai Akhirnya.
  
<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Variabel<br>
   - Informasi Pribadi: char nama[100], NIM[100], prodi[100], fakultas[100]<br>
   - Nilai Akademik: float praktikum, uts, uas, nilaiAkhir.<br>
3. Alur Program
   - Input Data Pribadi: Pengguna diminta untuk memasukkan nama, NIM, program studi, dan fakultas. Data diambil menggunakan fungsi fgets untuk mendukung spasi dalam input.<br>
   - Input Nilai Akademik: Pengguna memasukkan nilai praktikum, UTS, dan UAS menggunakan scanf.<br>
   - Perhitungan Nilai Akhir: Program menghitung nilai akhir menggunakan bobot yang telah ditentukan.<br>
   - Output: Program mencetak data pribadi dan nilai-nilai yang telah dimasukkan, termasuk nilai akhir.  
  </p>
</div>
<div>
  <h3 align="left">Latihan 3 : Program Menghitung Luas Segitiga</h3>
   <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
    <b>Deskipsi Program</b><br>
    Program ini adalah aplikasi sederhana yang dirancang untuk menghitung luas segitiga dan diketahui panjang alas = 8 cm,tinggi = 5 cm. Program menggunakan rumus dasar:Luas = 1/2 x alas x tinggi<br>
  </p>
  <b>Fitur</b><br>
  - Perhitungan Luas Segitiga: Program menggunakan nilai alas dan tinggi yang telah ditentukan untuk menghitung luas segitiga.<br>
  - Output yang Informatif: Program menampilkan hasil perhitungan luas segitiga di terminal.<br>
  
<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Variabel<br>
   - int a: Menyimpan nilai alas segitiga.<br>
   - int t: Menyimpan nilai tinggi segitiga.<br>
   - int luasSegitiga: Menyimpan hasil perhitungan luas segitiga.<br>
3. Perhitungan
   Menggunakan rumus matematika untuk menghitung luas segitiga: luasSegitiga = (a*t)/2<br>
4. Output<br>
   Hasil perhitungan luas segitiga ditampilkan di terminal menggunakan fungsi printf.<br>
   
  </p>
</div>
<div>
  <h3 align="left">Latihan 4 : Program Menghitung Luas Persegi Panjang</h3>
   <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
    <b>Deskipsi Program</b><br>
    Program ini adalah aplikasi sederhana yang dirancang untuk menghitung luas persegi panjang dengan
panjang = 10 cm, dan lebar = 5 cm. Program menggunakan rumus dasar:Luas = Panjang x Lebar<br>
  </p>
  <b>Fitur</b><br>
  - Perhitungan Luas Persegi panjang: Program menggunakan nilai alas dan tinggi yang telah ditentukan untuk menghitung luas persegi panjang.<br>
  - Output : Program menampilkan hasil perhitungan luas persegi panjang di terminal.<br>

  
<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Variabel<br>
   - int p: Menyimpan nilai panjang persegi panjang.<br>
   - int l: Menyimpan nilai lebar persegi panjang.<br>
   - int luasPersegiPanjang: Menyimpan hasil perhitungan luas persegi panjang.<br>
3. Perhitungan
   Menggunakan rumus matematika untuk menghitung luas persegi panjang: luasPersegiPanjang = p*l<br>
4. Output<br>
   Hasil perhitungan luas persegi panjang ditampilkan di terminal menggunakan fungsi printf.<br>
   
  </p>
</div>


## JOB SHEET 3-Variabel,Konstanta, dan Tipe Data
<div>
<h3 align="left">Latihan 1 : Program Konversi Mata Uang Rupiah Ke Dollar</h3>
  <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
  <b>Deskripsi Program</b><br>
Program ini adalah aplikasi sederhana yang digunakan untuk mengonversi nilai mata uang Rupiah (IDR) ke Dollar Amerika Serikat (USD). Program meminta pengguna memasukkan nominal uang dalam Rupiah sebesar Rp. 2.500.000, lalu menghitung konversinya berdasarkan kurs tetap (1$ = Rp. 14.250) yang ditentukan dalam program. 

<b>Fitur</b><br>
   - Input Nominal Rupiah: Pengguna dapat memasukkan jumlah uang dalam Rupiah yang ingin dikonversi(Rp. 2.500.000).<br>
   - Konversi ke Dollar: Program menghitung hasil konversi berdasarkan nilai kurs yang telah ditentukan (dalam program ini adalah Rp. 14.250 per 1 USD).<br>
   - Output : Karena menggunakan tipe data float hasil konversi ditampilkan dengan format desimal 2 angka di belakang koma untuk mempermudah pembacaan.<br>  
  
<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output seperti printf dan scanf.<br>
2. Variabel<br>
   - float rupiah: Menyimpan nominal uang dalam Rupiah yang dimasukkan oleh pengguna.<br>
   - float dollar: Menyimpan hasil perhitungan konversi ke Dollar.<br>
3. Proses Konversi<br>
   Menggunakan rumus sederhana untuk konversi: dollar = rupiah/14250. Kurs tetap yang digunakan adalah Rp. 14.250 per 1 USD.<br>
4. Alur Program
   - Program menampilkan pesan untuk meminta pengguna memasukkan uang dalam rupiah.<br>
   - Uang dalam bentuk rupiah yang dimasukkan pengguna disimpan dalam variabel rupiah menggunakan scanf.<br>
   - Program mengonversikan uang dalam rupiah ke dollar dengan membaginya dengan kurs yang telah ditetapkan.<br>
   - Program akan menampilkan hasil dari konversi uang rupiah ke bentuk dollar<br>
  </p>
</div>
<div>
 <div>
<h3 align="left">Latihan 2 : Program Konversi Suhu</h3>
  <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
  <b>Deskripsi Program</b><br>
Program ini adalah aplikasi sederhana yang digunakan untuk mengonversi suhu dari Celcius ke beberapa satuan suhu lainnya, yaitu Kelvin, Farenheit, dan Reamur. Program ini meminta pengguna memasukkan suhu dalam satuan Celcius, kemudian menghitung dan menampilkan hasil konversi ke satuan lain.

<b>Fitur</b><br>
1. Input Suhu: Pengguna dapat memasukkan suhu dalam satuan Celcius.<br>
2. Konversi ke Beberapa Satuan Suhu:<br>
    -  Kelvin (K)<br>
    -  Farenheit (F)<br>
    -  Reamur (R)<br>
3. Output: Program menampilkan hasil konversi dengan dua angka desimal untuk mempermudah pembacaan.<br>

<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Variabel<br>
   - float celcius: Menyimpan suhu awal yang dimasukkan pengguna dalam satuan Celcius.<br>
   - float kelvin: Menyimpan hasil konversi suhu ke Kelvin.<br>
   - float farenheit: Menyimpan hasil konversi suhu ke Farenheit.<br>
   - float reamur: Menyimpan hasil konversi suhu ke Reamur.<br>
3. Rumus Konversi<br>
Program menggunakan rumus berikut untuk melakukan konversi:<br>
- Kelvin:kelvin = celcius + 273.15<br>
- Farenheit: farenheit =(celcius×1.8)+32<br>
- Reamur: reamur=celcius×0.8<br>
     
4. Alur Program
   - Program meminta pengguna untuk memasukkan suhu dalam satuan Celcius.<br>
   - Setelah pengguna memasukkan suhu dalam Celcius, program melakukan beberapa perhitungan untuk mengonversi suhu ke satuan lain menggunakan rumus<br>
   - Program mencetak hasil konversi suhu ke berbagai satuan (Kelvin, Farenheit, dan Reamur)<br>
   - Program mengakhiri eksekusi setelah menampilkan hasil konversi. Fungsi return 0 digunakan untuk menandakan bahwa program berjalan dengan sukses.  
  </p>
</div>
<div>
  <h3 align="left">Latihan 3 : Program Menghitung Volume dan Luas Permukaan Bola Basket</h3>
   <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
    <b>Deskipsi Program</b><br>
    Program ini adalah aplikasi yang digunakan untuk menghitung volume dan luas permukaan dari bola basket berdasarkan diameter yang diberikan oleh pengguna yaitu 12cm.Program ini memungkinkan pengguna untuk memilih operasi yang diinginkan dan mengulang proses perhitungan jika diperlukan.<br>
  </p>
  <b>Fitur</b><br>
 1. Dua Pilihan Operasi :<br>
    - Menghitung Volume bola menggunakan rumus: V = 4/3 x π x r³ <br>
    - Menghitung Luas Permukaan bola menggunakan rumus:4 x π x r²<br>
  
  2. Input Diameter: Program meminta pengguna untuk memasukkan diameter bola (dalam satuan cm).  <br>
  3. Perulangan do-while: Setelah setiap perhitungan, program menanyakan apakah pengguna ingin melakukan operasi lainnya.  <br>
  4. Output : Hasil perhitungan disajikan dalam format desimal dengan dua angka di belakang koma.<br>


  
<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Variabel<br>
   - int pilihan: Menyimpan pilihan operasi pengguna (1 untuk volume, 2 untuk luas permukaan).
   - char ulang: Menentukan apakah pengguna ingin mengulangi operasi.
   - float d: Menyimpan diameter bola yang diinput oleh pengguna.
   - float r: Menyimpan nilai jari-jari bola, yang dihitung sebagai 𝑟=𝑑/2.
   - float volume: Menyimpan hasil perhitungan volume bola.
   - float luasPermukaan: Menyimpan hasil perhitungan luas permukaan bola.
   - const float PI = 3.14: Konstanta nilai π untuk perhitungan.<br>
   
3. Alur Program
   - Menampilkan Menu:
    Program menampilkan menu dengan dua pilihan operasi:
      1: Menghitung Volume.
      2: Menghitung Luas Permukaan.
   - Input Data:Pengguna memilih operasi dan memasukkan diameter bola.
   - Perhitungan:Menggunakan nilai diameter, program menghitung jari-jari bola dan menjalankan perhitungan sesuai pilihan pengguna.
   - Pengulangan:Setelah menyelesaikan operasi, program menanyakan apakah pengguna ingin mengulangi operasi. Jika pengguna memasukkan t, program akan berhenti.
   - Akhir Program:Program menampilkan pesan penutup.
  </p>
</div>

## JOB SHEET 4-Operator
<div>
<h3 align="left">Latihan 1 : Program Konversi Waktu dari detik ke Jam,Menit,Detik </h3>
  <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
  <b>Deskripsi Program</b><br>
Program ini adalah sebuah aplikasi sederhana dalam bahasa pemrograman C yang digunakan untuk mengkonversi waktu dari format detik ke format yang lebih terstruktur, yaitu jam, menit, dan detik. Pengguna hanya perlu memasukkan jumlah total detik, dan program akan menghitung serta menampilkan hasil konversi dalam format yang mudah dipahami. 

<b>Fitur</b><br>
   - Input waktu dalam detik: Pengguna dapat memasukkan waktu dalam detik yang ingin dikonversi(3700 detik).<br>
   - Konversi waktu: Program akan mengkonversikan waktu dari total detik ke bentuk jam,menit dan detik.<br>
   - Output : Hasil akan ditampilkan di layar dalam format "X Jam, Y Menit, Z Detik".<br>  
  
<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output seperti printf dan scanf.<br>
2. Variabel<br>
   - j: Menyimpan hasil perhitungan jam.<br>
   - m: Menyimpan hasil perhitungan menit.<br>
   - d: Awalnya digunakan untuk input jumlah detik, kemudian menyimpan detik yang tersisa setelah dikonversi.<br>
3. Proses Konversi<br>
   Menggunakan rumus sederhana untuk konversi:<br>
   - Jam = detik / 3600<br>
   - Menit = detik %(sisa bagi) 3600 / 60<br>
   - Detik = detik %(sisa bagi) 60 <br>
5. Alur Program
   - Program menampilkan pesan untuk meminta pengguna memasukkan waktu dalam detik.<br>
   - Waktu dalam bentuk detik yang dimasukkan pengguna disimpan dalam variabel d menggunakan scanf.<br>
   - Program mengonversikan waktu dalam detik ke bentuk jam,menit,detik dengan menghitung jumlah jam dengan membagi total detik dengan 3600 lalu
menghitung jumlah menit dari sisa detik setelah dikonversi ke jam dan menampilkan detik yang tersisa setelah dikonversi ke jam dan menit.<br>
   - Program akan menampilkan hasil dari konversi waktu dalam detik ke bentuk jam,menit,detik<br>
  </p>
</div>
<div>
 <div>
<h3 align="left">Latihan 2 : Program Kasir Sederhana</h3>
  <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
  <b>Deskripsi Program</b><br>
Program ini adalah aplikasi kasir sederhana yang digunakan untuk menghitung total biaya pembelian barang berdasarkan harga satuan dan jumlah barang yang dibeli. Program akan meminta pengguna untuk memasukkan nama mereka, nama barang, harga satuan barang, dan jumlah barang yang dibeli. Hasilnya, program akan menampilkan rincian pembelian dan harga total pembelian barang.<br>
<br><b>Fitur</b><br>
1. Input Data Pembeli:Pengguna memasukkan nama,nama barang,harga barang satuan dan jumlah barang dibeli.<br>
2. Proses Perhitungan: Program menghitung total biaya pembelian dengan mengalikan harga barang satuan dan jumlah barang.<br>
3. Output: Menampilkan informasi lengkap berupa nama pembeli, nama barang, harga satuan, jumlah barang, dan total biaya.<br>

<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Variabel<br>
   - nama: Menyimpan nama pembeli.(tipe data character)<br>
   - barang: Menyimpan nama barang yang dibeli.(tipe data character)<br>
   - harga: Menyimpan harga satuan barang (dalam bentuk tipe data float untuk angka desimal).<br>
   - jumlah: Menyimpan jumlah barang yang dibeli.(tipe data integer)
   - total: Menyimpan hasil perhitungan total harga pembelian.(dalam bentuk tipe data float untuk angka desimal)<br>
3. Rumus perhitungan total pembelian<br>
Program menggunakan rumus berikut : total = harga * jumlah<br>
     
4. Alur Program
   - Program meminta pengguna untuk memasukkan informasi yang diminta:nama pengguna,nama barang, harga barang satuan dan jumlah barang yang dibeli.<br>
   - Setelah pengguna memasukkan nama pengguna,nama barang, harga barang satuan dan jumlah barang yang dibeli, program melakukan perhitungan untuk menghitung total pembelian menggunakan rumus<br>
   - Program mencetak nama pengguna,nama barang, harga barang satuan,jumlah barang yang dibeli dan total pembelian.<br>
   - Program mengakhiri eksekusi setelah menampilkan output. Fungsi return 0 digunakan untuk menandakan bahwa program berjalan dengan sukses.  
  </p>
</div>
<div>
  <h3 align="left">Latihan 3 : Program Menghitung Nilai Akhir Pratikum Mahasiswa</h3>
   <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
    <b>Deskipsi Program</b><br>
    Program ini merupakan aplikasi sederhana untuk menghitung nilai akhir seorang mahasiswa berdasarkan bobot dari komponen-komponen nilai yang terdiri dari presensi, praktek, UTS (Ujian Tengah Semester), dan UAS (Ujian Akhir Semester). <br>
  </p>
  <b>Fitur</b><br>
   1. Input Informasi Mahasiswa:Nama mahasiswa,Nilai presensi, praktek, UTS, dan UAS.<br>
   2. Perhitungan Nilai Akhir: Menggunakan bobot tertentu untuk setiap komponen nilai: Presensi: 10%,Praktek: 20%,UTS: 30%,UAS: 40%.Setiap komponen nilai 
       tersebut akan dimasukkan kedalam rumus berikut :nilaiAkhir = (0.1 * presensi) + (0.2 * praktek) + (0.3 * uts) + (0.4 * uas)  <br>
   3. Output : Program akan menampilkan nama mahasiswa dan nilai akhir mahasiswa berdasarkan perhitungan yang didapat.<br>


  
<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Variabel<br>
   - Tipe data character :
      - nama: Menyimpan nama mahasiswa.
   - Tipe data float :
      - presensi: Menyimpan nilai presensi.
      - praktek: Menyimpan nilai praktek.
      - uts: Menyimpan nilai UTS.
      - uas: Menyimpan nilai UAS.
      - nilaiAkhir: Menyimpan hasil perhitungan nilai akhir mahasiswa.
   
4. Alur Program
   - Mengambil input nama mahasiswa dan nilai presensi,praktek,UTS dan UAS.
   - Menghitung nilai akhir menggunakan rumus berdasarkan bobot yang telah ditentukan.
   - Menampilkan nama mahasiswa nilai akhir yang sudah dihitung.
   - Akhir Program:Program akan menutup program.
  </p>
</div>
<div>
  <h3 align="left">Latihan 4 : Program Rental Film</h3>
   <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
    <b>Deskipsi Program</b><br>
Program ini adalah aplikasi sederhana untuk menghitung biaya sewa film berdasarkan durasi waktu menonton. Biaya sewa dihitung berdasarkan tarif tertentu :<br>
     1. Tarif untuk jam pertama adalah Rp 15,000.<br>
     2. Tarif untuk jam berikutnya adalah 50% dari tarif jam pertama (Rp 7,500). <br>
Program ini meminta pengguna memasukkan nama dan durasi menonton, lalu menghitung total biaya sewa berdasarkan aturan tersebut. <br>
  </p>
  
  <b>Fitur</b><br>
  1. Input Pengguna:Nama pengguna dan durasi waktu menonton film dalam jam.<br>
  2. Perhitungan Biaya:<br>
     - Tarif untuk jam pertama: Rp 15,000.<br>
     - Tarif untuk setiap jam berikutnya: Rp 7,500.<br>
     - Total biaya dihitung otomatis berdasarkan durasi dengan menggunakan if-else dengan kondisi : <br>
       - Jika hanya 1 jam, biaya adalah Rp 15,000<br>
       - Jika lebih dari 1 jam, biaya dihitung menggunakan: totalBiaya = tarifPertama + (durasiMenonton - 1) * tarifBerikutnya<br>
  3. Output : Program akan menampilkan nama,durasi menonton, dan total biaya berdasarkan perhitungan yang didapat.<br>

<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Variabel<br>
   - Tipe data character :
      - nama: Menyimpan nama pengguna.
   - Tipe data integer :
      - tarifPertama: Tarif sewa untuk jam pertama.
      - tarifBerikutnya: Tarif sewa untuk setiap jam berikutnya.
      - durasiMenonton: Menyimpan durasi menonton yang dimasukkan oleh pengguna.
      - uas: Menyimpan nilai UAS.
      - totalBiaya: Menyimpan hasil perhitungan total biaya sewa.
   
4. Alur Program
   - Mengambil input nama pengguna dan durasi menonton.
   - Menghitung total biaya berdasarkan aturan tarif.
   - Menampilkan nama pengguna,durasi menonton dan total biaya.
   - Akhir Program:Program akan menutup program.
  </p>
</div>


## JOB SHEET 5-Flow Control (Decision Making)
<div>
<h3 align="left">Latihan 1 : Program Kalkulator Sederhana </h3>
  <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
  <b>Deskripsi Program</b><br>
Program ini adalah kalkulator sederhana berbasis teks yang mendukung beberapa operasi matematika dasar:<br>
1. Penjumlahan<br>
2. Pengurangan<br>
3. Perkalian<br>
4. Pembagian<br>
5. Hasil bagi (sisa pembagian atau modulus)<br>.
Pengguna dapat melakukan beberapa operasi secara berulang sampai memilih untuk menghentikan program.<br>

<b>Fitur</b><br>
  
Fitur
1. Operasi Matematika Dasar:
  - Penjumlahan, pengurangan, perkalian, pembagian, dan modulus (sisa bagi).
  - Hasil ditampilkan hingga 2 angka desimal untuk operasi pembagian dan bilangan floating-point.
2. Meminta Input:Program meminta memilih operasi yang ingin dilakukan dan meminta pengguna memasukkan bilangan pertama dan kedua.
3. Pengulangan Operasi dengan do-while:Setelah selesai satu operasi, pengguna dapat memilih untuk melakukan operasi lainnya atau keluar dari program.
  
<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output seperti printf dan scanf.<br>
2. Variabel<br>
   - pilihan: Menyimpan pilihan operasi (1–5).<br>
   - bilangan1, bilangan2: Menyimpan input bilangan pertama dan kedua (float untuk mendukung desimal).<br>
   - hasil: Menyimpan hasil perhitungan.<br>
   - ulang: Mengontrol pengulangan operasi (y/t).<br>
3. Menu Operasi<br>
   - Menampilkan menu dengan opsi operasi dan pengguna diminta memasukkan angka pilihan (1–5).<br>
4. Logika Operasi<br>
   - Menggunakan switch untuk memilih operasi berdasarkan input pilihan,dengan kondisi :<br>
      - Jika Penjumlahan : hasil = bilangan1 + bilangan2 dan tampilkan hasil<br>
      - Jika Pengurangan : hasil = bilangan1 - bilangan2 dan tampilkan hasil<br>
      - Jika Perkalian   : hasil = bilangan1 x bilangan2 dan tampilkan hasil<br>
      - Jika pembagian   : Menggunakan kontrol if-else untuk pembagian 0,jika bilangan2 bukan 0 maka programm akan memproses rumus berikut :<br> hasil = 
                           bilangan1 / bilangan2 dan tampilkan hasil
      - Jika Modulus (Sisa Bagi) : Menggunakan kontrol if-else untuk sisa bagi 0,jika bilangan2 bukan 0 maka program akan memproses rumus berikut :<br> 
                                    hasil = (int)bilangan1 % (int)bilangan2 dan tampilkan hasil
    - Menggunakan Perulangan do-while untuk menanyakan pengguna apakah ingin mengulangi operasi,program akan berjalan terus hingga pengguna menginputkan "t"<br>
5. Alur Program
   - Program menampilkan pesan untuk meminta pengguna memilih operasi yang ingin dilakukan dan memasukkan angaka pertama dan kedua.<br>
   - Program akan melakukan perhitungan sesuai dengan yang telah dipilih sebelumnya <br>
   - Program akan menampilkan hasil perhitungan dan menanyakan apakah ingin melakukan operasi lain<br>
   - Program akan berhenti ketika pengguna menginputkan "t" dan memberikan pesan "terimakasih"<br>
  </p>
</div>
<div>
 <div>
<h3 align="left">Latihan 2 : Program "TOSERBA" yang dapat menghitung diskon</h3>
  <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
  <b>Deskripsi Program</b><br>
Program ini adalah aplikasi sederhana untuk pembelian di toserba (toko serba ada). Program menghitung total biaya yang harus dibayar pelanggan setelah menerapkan diskon berdasarkan total pembelian, dan menampilkan rincian transaksi.<br>
<br><b>Fitur</b><br>
1. Input Data Pembeli:Meminta nama pembeli, nama barang, harga barang, dan jumlah barang yang dibeli.<br>
2. Perhitungan Total Pembelian: Program Mengalikan harga satuan barang dengan jumlah barang untuk mendapatkan total pembelian.<br>
3. Diskon Berdasarkan Total Pembelian<br>
  - Diskon diterapkan dengan aturan:<br>
     - ≤ Rp 75,000: Diskon 5%.<br>
     - Rp 75,001 – Rp 125,000: Diskon 15%.<br>
     - ≥ Rp 125,001: Diskon 25% dan tambahan cashback Rp 5,000.<br>
4. Output : Menampilkan rincian pembelian, total pembelian, diskon, dan total yang harus dibayar.<br>

<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Variabel<br>
   - harga: Harga barang satuan (float untuk mendukung desimal).<br>
   - totalPembelian: Total harga sebelum diskon.<br>
   - diskon: Nilai diskon yang diterapkan.<br>
   -  totalBayar: Total harga setelah diskon.<br>
   -  nama dan barang: Menyimpan nama pembeli dan barang.<br>
   -  jumlah: Jumlah barang yang dibeli.<br>
  
3. Rumus Perhitungan Total Pembelian<br>
Program menggunakan rumus berikut : totalPembelian = harga * jumlah<br>
     
4. Alur Program
   - Program meminta pengguna untuk memasukkan informasi yang diminta:nama pembeli, nama barang, harga barang, dan jumlah barang yang dibeli.<br>
   - Setelah pengguna memasukkan nama pembeli, nama barang, harga barang, dan jumlah barang yang dibeli, program melakukan perhitungan untuk menghitung total pembelian menggunakan rumus<br>
   - Program akan menghitung diskon berdasarkan total pembelian dengan kondisi :<br>
       - Jika Total Pembelian ≤ Rp 75,000: Diskon 5%<br>
       - Jika Total Pembelian Rp 75,001 – Rp 125,000: Diskon 15%<br>
       - Jika Total Pembelian ≥ Rp 125,001: Diskon 25% + Cashback Rp 5,000<br>
   - Program mencetak nama pembeli, nama barang, harga barang, dan jumlah barang yang dibeli.total pembelian dan diskon yang didapatkan.<br>
   - Program mengakhiri eksekusi setelah menampilkan output. Fungsi return 0 digunakan untuk menandakan bahwa program berjalan dengan sukses.  
  </p>
</div>

<div>
  <h3 align="left">Latihan 3 : Program Menghitung Luas Permukaan Geometeri</h3>
   <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
    <b>Deskipsi Program</b><br>
   Program ini adalah kalkulator untuk menghitung luas permukaan dari berbagai bentuk geometris, termasuk bola, kubus, balok, dan tabung. Program 
 menyediakan menu untuk memilih bentuk geometris yang ingin dihitung, meminta input , dan menampilkan hasil perhitungan.<br>
  </p>
  <b>Fitur</b><br>
   1. Pilihan Perhitungan Luas Permukaan:<br>
      - Bola: Menggunakan rumus 4 x π x r²<br>
      - Kubus: Menggunakan rumus 6 x s²<br>
      - Balok: Menggunakan rumus 2 x (p x l + p x t + l x t)<br>
      - Tabung: Menggunakan rumus 2 x π x r x (r+t)<br>
   2. Pengulangan Perhitungan(do-while):
      Setelah perhitungan selesai, pengguna dapat memilih untuk melakukan operasi lain tanpa harus menjalankan ulang program.  <br>
   3. Output : Program akan menampilkan hasil dari perhitungan yang dipilih.<br>

<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Konstanta dan Variabel:<br>
   - PI: Konstanta untuk nilai π sebesar 3.14.
   - luasPermukaan: Variabel hasil perhitungan luas permukaan.
   - r, s, p, l, t: Variabel untuk parameter geometri seperti jari-jari, sisi, panjang, lebar, dan tinggi.
   - pilihan: Variabel untuk menyimpan pilihan bentuk geometris.
   - ulang: Variabel untuk mengulang perhitungan berdasarkan input pengguna.
   
4. Alur Program
   - Meminta input angaka untuk panjang,lebar,sisi,tinggi ataupun jari jari dari operasi yang dipilih.
   - Menghitung luas permukaan menggunakan rumus berdasarkan operasi yang telah dipilih.
   - Menampilkan hasil perhitungan operasi.
   - Akhir Program:Program akan menutup program.
  </p>
</div>
<div>
  <h3 align="left">Latihan 4 : Program Menghitung Nilai Akhir Mahasiswa dengan Ketentuan Kelulusan</h3>
   <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
    <b>Deskipsi Program</b><br>
Program ini adalah aplikasi berbasis teks untuk menghitung nilai akhir mahasiswa berdasarkan bobot dari kehadiran, tugas, UTS, dan UAS. Selain itu, program menentukan grade berdasarkan nilai akhir dan memberikan keterangan apakah mahasiswa lulus atau tidak.<br>
  </p>
  
  <b>Fitur</b><br>  
  1. Input Data Mahasiswa:Nama mahasiswa,NIM,Program Studi, Fakultas.<br>
  2. Input Nilai Akademik: Nilai Kehadiran (0-100),Nilai Tugas (0-100),Nilai UTS (0-100),Nilai UAS (0-100).
  3. Perhitungan Nilai Akhir dengan bobot nilai :
     - Kehadiran: 20%
     - Tugas: 20%
     - UTS: 25%
     - UAS: 35%<br>
    Dan di hitung menggunakan rumus : Nilai Akhir=(0.2⋅Kehadiran)+(0.2⋅Tugas)+(0.25⋅UTS)+(0.35⋅UAS)
  4. Penentuan Grade :<br>
<p>Berikut adalah tabel penentuan grade berdasarkan nilai akhir:</p>

<table border="1">
  <thead>
    <tr>
      <th>Nilai Akhir (%)</th>
      <th>Grade</th>
      <th>Keterangan</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>0 - 44</td>
      <td>E</td>
      <td>Maaf, anda tidak lulus!</td>
    </tr>
    <tr>
      <td>45 - 55</td>
      <td>D</td>
      <td>Maaf, anda tidak lulus!</td>
    </tr>
    <tr>
      <td>56 - 65</td>
      <td>C</td>
      <td>Anda lulus, tingkatkan lagi untuk kedepannya!</td>
    </tr>
    <tr>
      <td>66 - 75</td>
      <td>B-</td>
      <td>Anda lulus dengan baik, tingkatkan terus belajarnya!</td>
    </tr>
    <tr>
      <td>76 - 80</td>
      <td>B</td>
      <td>Anda lulus dengan baik, tingkatkan terus belajarnya!</td>
    </tr>
    <tr>
      <td>81 - 85</td>
      <td>B+</td>
      <td>Anda lulus dengan baik, tingkatkan terus belajarnya!</td>
    </tr>
    <tr>
      <td>86 - 90</td>
      <td>A-</td>
      <td>Selamat! Anda lulus dengan nilai yang sangat memuaskan!</td>
    </tr>
    <tr>
      <td>91 - 100</td>
      <td>A</td>
      <td>Selamat! Anda lulus dengan nilai yang sangat memuaskan!</td>
    </tr>
  </tbody>
</table>

  6. Output : Program akan menampilkan Nama mahasiswa,NIM,Program Studi, Fakultas,Nilai Akhir, Grade, dan Keterangan Kelulusan.<br>

<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Variabel<br>
   - nilaiKehadiran, nilaiTugas, nilaiUTS, nilaiUAS: Menyimpan nilai akademik.
   - nilaiAkhir: Menyimpan hasil perhitungan nilai akhir.
   - grade: Menyimpan nilai huruf mahasiswa.
   - keterangan: Variabel ini menggunakan pointer untuk menyimpan alamat memori dari string keterangan dan menunjuk ke string keterangan berdasarkan 
     perhitungan nilai akhir yang didapat.
   
4. Alur Program
   - Mengambil input data mahasiswa: Nama mahasiswa,NIM,Program Studi, Fakultas.
   - Mengambil input nilai akademik: Nilai Kehadiran (0-100),Nilai Tugas (0-100),Nilai UTS (0-100),Nilai UAS (0-100)
   - Setelah program menyimpan input di variabel masing masing, Program menghitung nilai akhir menggunakan rumus.
   - Nilai akhir yang didapatkan akan dikelompokkan menggunakan kontrol if-else berdasarkan grade dan setiap grade mengeluarkan pesan kelulusan yang 
     berbeda.
   - Program akan mengeluarkan output data mahasiswa,nilai akhir,grade,dan keterangan (pesan kelulusan)
   - Akhir Program:Program akan menutup program.
  </p>
</div>

<img src="1.1.png" alt="ss" width="400" height="400">

Here's a blank template to get started: To avoid retyping too much info. Do a search and replace with your text editor for the following: `github_username`, `repo_name`, `twitter_handle`, `linkedin_username`, `email_client`, `email`, `project_title`, `project_description`

<p align="right">(<a href="#readme-top">back to top</a>)</p>
