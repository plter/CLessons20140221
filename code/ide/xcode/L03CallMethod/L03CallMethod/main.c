//
//  main.c
//  L03CallMethod
//
//  Created by plter on 14-2-21.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>


int max(int a,int b){
    if (a>b) {
        return a;
    }else{
        return b;
    }
}


int main(int argc, const char * argv[])
{

    // insert code here...
    printf("%d\n",max(10, 12));
    return 0;
}

