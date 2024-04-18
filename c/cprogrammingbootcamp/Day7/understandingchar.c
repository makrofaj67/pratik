#include <stdio.h>


int main ()
{
    char myChar1 = 'NBSP';
    printf("%c", myChar1);

    printf("alkdfla%dljsaldf", myChar1);
}

/*
şimdi ascii table deyu bi şey var
ascii table'da lanet olası amerikalılar
kendi byte representationlarını bütün dünyaya
empoze etmek için aha bu bytelar bilgisayarda
böyle görünecek demiş

ama 8 bitlik yürek olmadığı için ilk olarak
7 bitlik charlar oluşturmuşlar, 8. bit boş kalmış.
daha sonraları lanet olası bilgisayardaki 8.
biti de kullanmaya başlamışlar ve extended ascii table oluşmuş.

şimdi c dilinde char nasıl çalışır ona bakalım

char farkettiğin üzere

'a'
a
1
'1'
0xAB
gibi bisüürü şekilde değişken değeri tanımlamaya izin veriyor

şimdi eğer ascii table'da bir tane represented karakter kullnamka istersek
onu ' ' arasına alıyoruz

eğer ascii tableda sadece integer değeriyle bir değer işaret etmek istersek
' '  arasına koymuyoruz

aynış şekilde oktal ve hexadecimal'da da koymuyoruz
bütün olay bundan ibaret.

char sadece 1 karakteri taşıyabiliyor, diğer iler konular içün
ileriye gidiniz
*/