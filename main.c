//
//  main.c
//  mycat
//
//  Created by TZY on 2022/3/30.
//

#include <stdio.h>

//自己实现strcat()函数
char *mycat(char *dst, const char *src) {
 
//    数组版本
//    int idx = 0;
//    int n = 0;
//
//    while (dst[idx] != '\0') {
//
//        idx++;
//
//        if (dst[idx] == '\0') {
//            break;
//        }
//    }
//
//    while (src[n] != '\0') {
//
//        dst[idx + n] = src[n];
//        n++;
//    }
//    dst[idx + n] = '\0';
//    return dst;
//
    
//    指针版本
//    char *ret = dst;
//    while (*dst != '\0') {
//
//        dst++;
//        if (*dst == '\0') {
//            break;
//        }
//    }
//
//    while (*src != '\0') {
//
//        *dst = *src;
//        dst++;
//        src++;
//    }
//    *dst = '\0';
//    return ret;
    
//    指针改良版1
//    char *ret = dst;
//    while (*dst) {
//
//        dst++;
//        if (*dst == '\0') {
//            break;
//        }
//    }
//
//    while (*src) {
//
//        *dst++ = *src++;
//    }
//    *dst = '\0';
//    return ret;
    
//    指针改良版2
//    char *ret = dst;
//    while (dst++) {
//
//        if (*dst == '\0') {
//            break;
//        }
//    }
//
//    while (*dst++ = *src++);
//
//    *dst = '\0';
//    return ret;
    
//    指针改良版3
//    char *ret = dst;
//    while (*dst != '\0') {
//
//        dst++;
//    }
//
//    while (*dst++ = *src++);
//
//    *dst = '\0';
//    return ret;
    
//    指针改良版4
    char *ret = dst;
    while (*dst) {
        
        dst++;
    }

    while (*dst++ = *src++);

    return ret;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char a[10] = "Hello";
    char b[3] = "ab";
    
    mycat(a, b);
    printf("%s\n", a);
    
    return 0;
}
