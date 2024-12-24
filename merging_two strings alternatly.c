#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *merge_strings(char *word1,char *word2 );

int main(void){
    char word1[] = "prajwal";
    char word2[] = "programming";

    char *word = merge_strings(word1,word2);
    printf("%s",word);
    free(word);
    return 0;

}
char *merge_strings(char *word1,char *word2 ){
    int total1 = 0, total2 = 0,total = 0,i = 0 , index = 0;

    while(word1[total1] != '\0') total1++;
    while(word2[total2] != '\0') total2++;

    total = total1 + total2 + 1;

    char *word = malloc(total * sizeof(char));

    while(i<total1 || i < total2){
        if(i < total1){
            word[index++] = word1[i];
        }
        if(i<total2){
            word[index++] = word2[i];
        }
        i++;
    }
    word[index] = '\0';
    return word;
}
