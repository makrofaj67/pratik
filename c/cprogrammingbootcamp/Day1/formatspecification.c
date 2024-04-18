#include <stdio.h>
#include <stdlib.h>

int main ()

{   
    int yas = 25; 
    printf("O %d yaşında\n", yas); //%d burada çentiklerden sonra gelen integer (decimal) değerini alır
    printf("O %d yaşında", 20); //variable ya da literal integer farketmez
    printf("kalem, %d, kağıt %d\n", 20, 25);
    printf("laş0\n");
    printf("%.1f\n", 12.5); /*normalde %f ile float olduğu belirtilir. ancak floatta, ne kadar basamak olduğunu da seçebilirsin. örneğin, .'dan sonra 1 digit olsun
    demek istersen nokta koy, "." kaç digit istediğini ekle "1" ardından float olduğunu belirt "f"
    yani .1f yazabilirsin.
    */
    printf("%d", 21.5);
    return 0;
}