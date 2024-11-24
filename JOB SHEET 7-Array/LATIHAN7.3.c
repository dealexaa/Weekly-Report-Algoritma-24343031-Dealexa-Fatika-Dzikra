#include <stdio.h>
#include <string.h>

int main() {
    // Deklarasi username dan password yang valid
    const char validUsername[] = "ddealexa";
    const char validPassword[] = "12345678";

    // Variabel untuk menyimpan input dari pengguna
    char inputUsername[50];
    char inputPassword[50];

    // Meminta input username
    printf("Masukkan username: ");
    scanf("%s", inputUsername);

    // Meminta input password
    printf("Masukkan password: ");
    scanf("%s", inputPassword);

    // Mengecek apakah username dan password sesuai
    if (strcmp(inputUsername, validUsername) == 0 && strcmp(inputPassword, validPassword) == 0) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}
