//
//  main.c
//  L12ooc
//
//  Created by plter on 14-2-25.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//Object begin>>>>>>>>>>>>
#define ObjectField \
    void(*onDelete)(void*);

typedef struct Object{
    ObjectField
} Object;

#define ObjectCreate(TYPE) malloc(sizeof(TYPE))
#define ObjectDelete(obj) {\
    obj->onDelete(obj);\
    free(obj);\
}

void ObjectOnDelete(void *obj){
    printf("Object on delete\n");
}

Object* ObjectInit(Object *obj){
    obj->onDelete = ObjectOnDelete;
    return obj;
}

//Object end<<<<<<<<<<<<


typedef struct{
    ObjectField
    int age;
    void(*sayHello)();
} People;

void PeopleSayHello(){
    printf("Hello\n");
}

void PeopleOnDelete(void *p){
    ObjectOnDelete(p);
    
    printf("People on delete\n");
}

People* PeopleInit(People *p,int age){
    ObjectInit((Object*)p);
    
    p->age = age;
    p->sayHello = PeopleSayHello;
    p->onDelete = PeopleOnDelete;
    return p;
}


int main(int argc, const char * argv[])
{
    People *p = PeopleInit(ObjectCreate(People), 20);
    p->sayHello();
    ObjectDelete(p);
    
//    printf("Hello, %d!\n",p->age);
    return 0;
}

