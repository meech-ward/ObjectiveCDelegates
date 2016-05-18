//
//  Person.m
//  Delegate
//
//  Created by Sam Meech Ward on 2016-05-17.
//  Copyright © 2016 meech-ward. All rights reserved.
//

#import "Person.h"

@implementation Person

- (void)wakeUp {
    // I don't care who or what makes my coffee, or how it is made, I just want coffee
    [self.somethingThatMakesMeACoffee makeMeACoffee];
}

@end
