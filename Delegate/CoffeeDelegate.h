//
//  CoffeeDelegate.h
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
