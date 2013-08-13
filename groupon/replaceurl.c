# include <stdio.h>
/* -- http://www.careercup.com/question?id=21124663 --*/
/*----------------------------------------
bruce@ubuntu:~/Desktop/GroupOn$ ./a.out 
Before : kitten%20pic.jpg
Before : kitten pic.jpg
----------------------------------------*/

void DecodeURL(char *ptr){
    int i = 0, j = 0;;
    while(ptr[i] != '\0'){
        if (ptr[i] == '%'){
            if((ptr[i+1] == '2') & (ptr[i+2] == '0')){
                ptr[i] = ' ';
                j = i + 3;
                while (ptr[j] != '\0'){
                    ptr[++i] = ptr[j++];
                }
                ptr[++i] = '\0';
                break;
            }
        }
        i++;
    }
}
int main(){
    char urlname[30];
    strcpy(urlname, "kitten%20pic.jpg");
    printf("Before : %s\n", urlname);
    DecodeURL(urlname);
    printf("After : %s\n", urlname);
}

