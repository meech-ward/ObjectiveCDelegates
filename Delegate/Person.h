//
//  Person.h
//  Delegate
//
//  Created by Sam Meech Ward on 2016-05-17.
//  Copyright © 2016 meech-ward. All rights reserved.
//

#import <Foundation/Foundation.h>

/// This is nothing more than a template that defines what a Coffee Delegate should do.
@protocol CoffeeDelegate <NSObject>

/// Any object that wants to be a coffee delegate will have to be able to makeMeACoffee.
- (void)makeMeACoffee;

@end


@interface Person : NSObject

/**
 Here I am creating a property that is of type `id` which means this can be any object, I don't care what kind of object it is. The only thing I care about is that it conforms to the 'CoffeeDelegate' protocol. This means that this will be an object that I can tell to makeMeACoffee.
 */
@property (weak, nonatomic) id <CoffeeDelegate> somethingThatMakesMeACoffee;

- (void)wakeUp;

@end


