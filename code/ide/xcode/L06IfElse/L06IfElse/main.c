//
//  main.c
//  L06IfElse
//
//  Created by plter on 14-2-24.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <stdio.h>

int max(int a,int b){
    return a>b?a:b;
}

void test(int score){
    if (score>=90) {
        printf("优秀\n");
    }else if(score>=80){
        printf("良好\n");
    }else if (score>=60){
        printf("及格\n");
    }else{
        printf("不及格\n");
    }
}

void test1(int score){
    switch (score/10) {
        case 9:
            printf("优秀\n");
            break;
        case 8:
            printf("良好\n");
            break;
        case 7:
        case 6:
            printf("及格\n");
            break;
        default:
            printf("不及格\n");
            break;
    }
}



int main(int argc, const char * argv[])
{
//    test(80);
    test1(35);
    
    return 0;
}

