#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

int main(){
    int c, nc, nw, nl, state;

    state=OUT;
    nl=nw=nc=0;
    while((c=getchar())!=EOF){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\t' || c == '\n')
            state=IN;
        else if(state==OUT) {
            state=IN;
            ++nw;
        }
    }
    printf("%d characters, %d words, %d lines",nc,nw,nl);
    return 0;
}
