//
//  APAppDelegate.h
//  Milk Carton
//
//  Created by Michael Gozzo on 12-03-28.
//  Copyright (c) 2012 Convoca. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FBConnect.h"

@interface APAppDelegate : UIResponder <UIApplicationDelegate, FBSessionDelegate> {
    Facebook *facebook;
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) Facebook *facebook;

@end
