//
//  main.c
//  L14ConStr
//
//  Created by plter on 14-2-25.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    char buf[100];
    memset(buf, 0, 100);
    
    sprintf(buf, "Hello %d,%f,%s",100,1.2,"jikexueyuan");
    
    printf("%s\n",buf);
    
    return 0;
}

