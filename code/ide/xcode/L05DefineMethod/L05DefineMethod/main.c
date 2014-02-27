//
//  main.c
//  L05DefineMethod
//
//  Created by plter on 14-2-24.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>


#define MAX(A,B) \
    A>B?A:B


int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, %f\n",MAX(10.1, 20.3));
    return 0;
}

