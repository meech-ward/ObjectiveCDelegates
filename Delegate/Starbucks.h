//
//  Starbucks.h
//  Delegate
//
//  Created by Sam Meech Ward on 2016-05-17.
//  Copyright © 2016 meech-ward. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CoffeeDelegate.h"

@interface Starbucks : NSObject <CoffeeDelegate>
// By adding <CoffeeDelegate> here, Starbucks is saying that it will allow anyone to tell it to makeMeACoffee

@end
