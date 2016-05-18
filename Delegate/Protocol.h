//
//  Protocol.h
//  Delegate
//
//  Created by Sam Meech Ward on 2016-05-17.
//  Copyright © 2016 meech-ward. All rights reserved.
//

#import <Foundation/Foundation.h>

- (void)userFinishEdittingText:(NSString*)text {
    SecondViewController.userInput.text
}

@protocol UserInputDelegate <NSObject>

- (void)userFinishEdittingText:(NSString*)text;

@end


