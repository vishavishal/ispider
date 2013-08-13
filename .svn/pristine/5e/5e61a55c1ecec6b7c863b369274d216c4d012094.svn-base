# include <stdio.h>
/*
 * Source  : http://www.geeksforgeeks.org/return-maximum-occurring-character-in-the-input-string/
 * Author  : Vivek
 * Date    : July 14, 2013.
 */

struct maxChar{
    char ch;
    int count;
}mC;
int charcount[26] = {0};

struct maxChar maxCharInString(char *buff){
    int max = 0, count = 0, charac = 0;
    while (*buff != '\0'){
        charcount[*buff - 97]++;
        buff++;
    }
    while (count != 26){
        if (max < charcount[count]){
            max = charcount[count];
            mC.ch = 97 + count;
            mC.count = max;
        }
        count++;
    }
    return mC;
}

int main(int argc, char argv[]){
    char buff[20] = {'0'};

    printf("Enter the string  :  ");
    scanf("%s",buff);

    struct maxChar mc = maxCharInString(buff);
    printf("Output : %d %c\n", mc.count, mc.ch);
}
