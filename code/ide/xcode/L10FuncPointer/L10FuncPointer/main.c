//
//  main.c
//  L10FuncPointer
//
//  Created by plter on 14-2-24.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>


void sayHello(){
    printf("Hello C\n");
}


int main(int argc, const char * argv[])
{

//    sayHello();
    
    void (*p)();
    p = sayHello;
    
    p();
    
    return 0;
}

