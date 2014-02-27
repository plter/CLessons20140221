//
//  main.c
//  L16RandNum
//
//  Created by plter on 14-2-25.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[])
{

    srand((int)time(NULL));
    int randNum = rand()%100;
    
    printf("输入一个0到100的数值\n");
    
    int userInput;
    
    while (1) {
        scanf("%d",&userInput);
        
        if (userInput<randNum) {
            printf("数值过小\n");
        }else if (userInput>randNum){
            printf("数值过大\n");
        }else{
            printf("正确\n");
            break;
        }
    }
    
    printf("exit\n");
    
    
    return 0;
}

