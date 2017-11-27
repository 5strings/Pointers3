//
//  main.c
//  IncreDecrOnPointers
//
//  Created by Eun Jae Lee on 27/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main() {

    int a[5] = {0,1,2,3,4};

    int *p;
    p = &a[0];
    
    printf("Value at p is %p\n",p);//or %u address
    printf("Value at the address of p is %d\n\n",*p);
    
    p++; // address is increase by 4 bytes
    printf("Value at p is %p\n", p);
    printf("Value at the address of p is %d\n\n",*p);
    
    p++; // address is increase
    printf("Value at p is %p\n", p);
    printf("Value at the address of p is %d\n\n",*p);
    
    getchar();
    
}
