#include <stdio.h>
#include <string.h>

struct Zodiak {
    char nama[20];
    int startDay;
    int startMonth;
    int endDay;
    int endMonth;
};

int main() {
    struct Zodiak zodiaks[] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}
    };

    int tgl, bln, thn;
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tgl, &bln, &thn);

    // Menentukan zodiak
    char* zodiak = NULL;
    for (int i = 0; i < 12; i++) {
        if ((bln == zodiaks[i].startMonth && tgl >= zodiaks[i].startDay) ||
            (bln == zodiaks[i].endMonth && tgl <= zodiaks[i].endDay)) {
            zodiak = zodiaks[i].nama;
            break;
        }
    }

    if (zodiak != NULL) {
        printf("Tanggal Lahir Anda : %02d-%02d-%04d\n", tgl, bln, thn);
        printf("Zodiak Anda adalah : %s\n", zodiak);
    } else {
        printf("Tanggal lahir tidak valid.\n");
    }

    return 0;
}