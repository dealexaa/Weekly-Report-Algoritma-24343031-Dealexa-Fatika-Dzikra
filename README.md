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
  <p>
  <b>Deskripsi Program</b><br>
Program ini adalah aplikasi sederhana yang dibuat dengan bahasa C. Program ini bertujuan untuk menyapa pengguna dengan menampilkan pesan selamat datang yang ditampilkan berdasarkan nama lengkap yang dimasukkan oleh pengguna.Program akan menampilkan pesan “Selamat Datang <nama> dalam
Pemrograman C!” 

<p><b>Fitur</b><br>
     - Input Nama Lengkap: Program meminta pengguna untuk memasukkan nama lengkap mereka.<br>
     - Output: Program menampilkan pesan selamat datang khusus menggunakan nama pengguna yang telah dimasukkan.</p>
  
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
  </p>
</div>
<div>
 <div>
<h3 align="left">Latihan 2 : Program Menentukan Nilai Akhir Mahasiswa</h3>
  <img src="1.1.png" alt="ss" width="200" height="200"><br>
  <p>
  <b>Deskripsi Program</b><br>
Program ini adalah aplikasi sederhana yang memungkinkan pengguna untuk:<br>
1. Memasukkan informasi pribadi (Nama, NIM, Program Studi, dan Fakultas).
2. Memasukkan nilai praktikum, UTS, dan UAS.
3. Menghitung nilai akhir berdasarkan bobot:
   - 30% untuk nilai praktikum,
   - 30% untuk nilai UTS,
   - 40% untuk nilai UAS.
Program ini kemudian menampilkan informasi lengkap beserta nilai akhir pengguna.

<p><b>Fitur</b><br>
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
</p>
  
<br><b>Struktur Program</b><br>
Program ini terdiri dari bagian utama sebagai berikut:<br>

1. Header<br>
   Menggunakan pustaka stdio.h untuk fungsi input-output.<br>
2. Variabel<br>
   - Informasi Pribadi:<br>
      - char nama[100], NIM[100], prodi[100], fakultas[100]<br>
  - Nilai Akademik:<br>
     - float praktikum, uts, uas, nilaiAkhir.<br>
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
  <p><b>Fitur</b><br>
  - Perhitungan Luas Segitiga: Program menggunakan nilai alas dan tinggi yang telah ditentukan untuk menghitung luas segitiga.<br>
  - Output yang Informatif: Program menampilkan hasil perhitungan luas segitiga di terminal.<br>
</p>
  
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
  <p><b>Fitur</b><br>
  - Perhitungan Luas Persegi panjang: Program menggunakan nilai alas dan tinggi yang telah ditentukan untuk menghitung luas persegi panjang.<br>
  - Output : Program menampilkan hasil perhitungan luas persegi panjang di terminal.<br>
</p>
  
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

<img src="1.1.png" alt="ss" width="400" height="400">

Here's a blank template to get started: To avoid retyping too much info. Do a search and replace with your text editor for the following: `github_username`, `repo_name`, `twitter_handle`, `linkedin_username`, `email_client`, `email`, `project_title`, `project_description`

<p align="right">(<a href="#readme-top">back to top</a>)</p>
