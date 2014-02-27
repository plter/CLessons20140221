//
//  main.c
//  L15File
//
//  Created by plter on 14-2-25.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
//    FILE * f = fopen("data.txt", "w");
//    if (f!=NULL) {
//        for (int i=0; i<100; i++) {
//            
//            fprintf(f, "Hello %d\n",i);
//        }
//    }
//    fclose(f);
    
    FILE *f = fopen("data.txt", "r");
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    char buf[size+1];
    fseek(f, 0, SEEK_SET);
    fread(buf, sizeof(unsigned char), size, f);
    buf[size]= '\0';
    fclose(f);
    
    printf("%s",buf);
    
//    printf("end\n");
    // insert code here...
    //    printf("Hello, World!\n");
    return 0;
}

