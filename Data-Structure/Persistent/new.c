/*Question

The current selected programming language is CPP. We emphasize the submission of a fully working code over partially correct but efficient code. Once submitted, you cannot review this problem again. The version of GCC being used is 5.2.0

Charlie has a magic mirror. The mirror shows right rotated versions of a given word.

To generate different right-rotations of a word, write the word in a circle in clockwise order, then start reading from any given character in clockwise order till you have covered all the characters.

For example: In the word "sample", if we start with 'p', we get the right rotated word as "plesam". There are six such right rotations of "sample" including itself.

The inputs to the function isSameReflection consists of two

strings, word1 and word2. The function returns 1 if word1 and word2 are right rotations of the same word and -1 if they are not. Both word1 and word2 will strictly contain characters between 'a z (lower case letters).

*/

// #include <stdio.h>

// int main()

// {

// char name[20];

// scanf("%s", name);

// printf("Hello %s", name); return 0;

// } */

// Read input from STDIN // Write output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will e

// #include<stdio.h>

// int main()

// {

// // Write your code here


// char name[20];

// scanf("%s", name);

// printf("Hello %s", name);


// return 0;

// }

#include <stdio.h>
#include <string.h>

int isSameReflection(char word1[], char word2[]) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);

    // Check if lengths are equal
    if (len1 != len2)
        return -1;

    // Concatenate the first word with itself
    char concatenated[2 * len1 + 1];
    strcpy(concatenated, word1);
    strcat(concatenated, word1);

    // Check if the second word is a substring of the concatenated string
    if (strstr(concatenated, word2) != NULL)
        return 1;
    else
        return -1;
}

int main() {
    char word1[20], word2[20];

    printf("Enter word 1: ");
    scanf("%s", word1);

    printf("Enter word 2: ");
    scanf("%s", word2);

    int result = isSameReflection(word1, word2);

    if (result == 1)
        printf("The words are right rotations of the same word.\n");
    else if (result == -1)
        printf("The words are not right rotations of the same word.\n");

    return 0;
}
