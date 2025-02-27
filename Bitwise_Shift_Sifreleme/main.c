#include <stdio.h>
#include <string.h>

void sifrele(char *metin, int kaydirma) {
    for (int i = 0; metin[i] != '\0'; i++) {
        metin[i] = metin[i] >> kaydirma;
    }
}
void sifreCoz(char *metin, int kaydirma) {
    for (int i = 0; metin[i] != '\0'; i++) {
        metin[i] = metin[i] << kaydirma;
    }
}
int main() {
char metin[100];
int kaydirma = 1;//Burayý kaç bit kaydýrmak istiyorsanýz ayarlayabilirsiniz

printf("Sifrelenecek metni girin: ");
fgets(metin, sizeof(metin), stdin);
metin[strcspn(metin, "\n")] = 0;
    sifrele(metin, kaydirma);
    printf("Sifrelenmis metin: %s\n", metin);
    sifreCoz(metin, kaydirma);
    printf("Cozulmus metin: %s\n", metin);
     return 0;
}
