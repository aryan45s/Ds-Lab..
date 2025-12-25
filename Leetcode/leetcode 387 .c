#include <stdio.h>
#include <string.h>

int firstUniqChar(char *s) {
    int freq[256] = {0};  
    int len = strlen(s);


    for (int i = 0; i < len; i++) {
        freq[(unsigned char)s[i]]++;
    }

    
    for (int i = 0; i < len; i++) {
        if (freq[(unsigned char)s[i]] == 1) {
            return i;
        }
    }

    return -1;
}
