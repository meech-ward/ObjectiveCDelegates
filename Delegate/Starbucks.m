//
//  Starbucks.m
//  Delegate
//
//  Created by Sam Meech Ward on 2016-05-17.
//  Copyright © 2016 meech-ward. All rights reserved.
//

#import "Starbucks.h"

@implementation Starbucks


- (void)servePerson:(Person *)person {
    person.somethingThatMakesMeACoffee = self;
}

// Beacause starbucks conforms to the <CoffeeDelegate>, you have made a promise to respond to anyone that says makeMeACoffee
- (void)makeMeACoffee {
    // Make a coffee
    NSLog(@"Making your coffee");
}

@end
