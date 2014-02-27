//
//  main.c
//  L08Struct
//
//  Created by plter on 14-2-24.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>


struct People {
    int age;
    char *name;
};


int main(int argc, const char * argv[])
{

    // insert code here...
    
    struct People p;
    p.age = 10;
    p.name = "XiaoLi";
    
    printf("age:%d\n",p.age);
    
    struct People p1 = p;
    p.age = 20;
    
    printf("age:%d\n",p1.age);
    
    return 0;
}

