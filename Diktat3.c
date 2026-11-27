#include <stdio.h>
#include <stdlib.h>

int strleng(char *wort){
    int sz = 0;
    for (; wort[sz] != '\0'; sz++)
        ;
    return sz;
}

void dump(char* wort){
    for(int i = 0; wort[i] != '\0'; i++){
        printf("%c", wort[i]);
    }
    printf("\n");}

char* init(int sz, char c){
    char* wort = malloc(sz + 1);
    for(int i = 0; i < sz; i++){
        wort[i] = c;
    }
    wort[sz] = '\0';
    return wort;
}
int is_upper(char c){
    return c >= 'A' && c <= 'Z';
}
int is_lower(char c){
    return c >= 'a' && c <= 'z';
}
char normalize(char c){
    if (!is_upper(c) && !is_lower(c))
        return -1;
    return c +  ('a' - 'A');
    }

int check(char* wort1, char* wort2, char c){
    if(strleng(wort1) == 0 || strleng(wort1) != strleng(wort2)){
        return -1;
    }
 
    for(int i = 0; wort1[i] != '\0'; i++){
       if (wort1[i] == c){
            wort2[i] = c;
       }
  
    }
    
    return 0;
}

int main(int argc, char* argv){
    char* wort = "WORT";
    char* wort2 = init(strleng(wort), '_');

    dump(wort2);
    check(wort, wort2, 'O');

    dump(wort2);
    free(wort2);

    return 0;
}