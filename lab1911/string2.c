#include <stdio.h>
    #include <string.h>
    
    int main() {
        char str1[100], str2[100];
    
        // 2 string input
        printf("Enter first string: ");
        gets(str1);
       
    
        printf("Enter second string: ");
        gets(str2); // Using only fgets(str2)
      
    
        // 2 string print
        printf("First string: %s\n", str1);
        printf("Second string: %s\n", str2);
    
        // 2 string length
        printf("Length of first string: %lu\n", strlen(str1));
        printf("Length of second string: %lu\n", strlen(str2));
    
        // 2 string compare
        int cmp_result = strcmp(str1, str2);
        if (cmp_result == 0) {
            printf("The strings are equal.\n");
        } else if (cmp_result < 0) {
            printf("The first string is less than the second string.\n");
        } else {
            printf("The first string is greater than the second string.\n");
        }
    
        // 2 string copy
        char str1_copy[100], str2_copy[100];
        strcpy(str1_copy, str1);
        strcpy(str2_copy, str2);
        printf("Copy of first string: %s\n", str1_copy);
        printf("Copy of second string: %s\n", str2_copy);
    
        // 2 string concatenation
        char str3[200];
        strcat(str3, str1);
        strcat(str3, str2);
        printf("Concatenated string: %s\n", str3);
    
        // 2 string reverse
        char str1_reverse[100], str2_reverse[100];
        strcpy(str1_reverse, str1);
        strcpy(str2_reverse, str2);
        strrev(str1_reverse);
        strrev(str2_reverse);
        printf("Reversed first string: %s\n", str1_reverse);
        printf("Reversed second string: %s\n", str2_reverse);
    
        
    
        return 0;
}