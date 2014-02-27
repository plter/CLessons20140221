//
//  main.c
//  L11TypeDef
//
//  Created by plter on 14-2-25.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>


typedef struct{
    int age;
} People;

void sayHello(){
    printf("Hello\n");
}

typedef void(*Func)();


int main(int argc, const char * argv[])
{
    
    People p;
    p.age = 10;
    
    Func f = sayHello;
    f();
    
    printf("Hello, %d\n",p.age);
    return 0;
}

