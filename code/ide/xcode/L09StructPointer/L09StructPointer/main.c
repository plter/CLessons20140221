//
//  main.c
//  L09StructPointer
//
//  Created by plter on 14-2-24.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


struct People {
    int age;
};


int main(int argc, const char * argv[])
{

    struct People * p = malloc(sizeof(struct People));
    p->age = 10;
    
    struct People * p1 = p;
    
    p->age = 12;
    
    printf("%d\n",p1->age);
    
    free(p);
    
    return 0;
}

