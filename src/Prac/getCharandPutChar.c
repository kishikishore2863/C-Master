//
// Created by Kishi Kishore N on 23/09/25.
//

#include <stdio.h>
void fX ();
int main(){
    fX();
    return 0 ;
};
void fX () {
    char a;
    if ((a=getchar()) != '\n')
        fX();
    if (a != '\n')
        putchar (a);
}
