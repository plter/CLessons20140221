//
//  main.c
//  L01HelloC
//
//  Created by plter on 14-2-21.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // insert code here...
//    printf("Hello, C!\n");
    
    for (int i=0; i<argc; i++) {
        printf("%s\n",argv[i]);
    }
    
    return 0;
}

