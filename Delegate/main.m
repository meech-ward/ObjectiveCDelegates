//
//  main.m
//  Delegate
//
//  Created by Sam Meech Ward on 2016-05-17.
//  Copyright © 2016 meech-ward. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
#import "Starbucks.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        // Create a new person
        Person *me = [[Person alloc] init];
        
        // Create a new starbucks
        Starbucks *starbucks = [[Starbucks alloc] init];
        
        // Set starbucks as the thing that makes me coffee
        [starbucks servePerson:me];
        
        // Wake me up
        [me wakeUp];
    }
    return 0;
}
