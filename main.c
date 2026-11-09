#include <stdio.h>
int main(void){
    int okawari_manpuku;
    scanf("%d",&okawari_manpuku);
    int manpuku_input=!(okawari_manpuku < 0 || (okawari_manpuku >= 10 && okawari_manpuku < 12 ) || okawari_manpuku >= 15); //ド・モルガンの法則を使いinputを定義する
    if(manpuku_input == 1)//もし定義されたinputが1と等しい場合
    {
        printf("OK");
    
    }
    else{
        printf("NG");
    
    }
    
    
    
    return 0;

}
