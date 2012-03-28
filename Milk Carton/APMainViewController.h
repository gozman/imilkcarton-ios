//
//  APMainViewController.h
//  Milk Carton
//
//  Created by Michael Gozzo on 12-03-28.
//  Copyright (c) 2012 Convoca. All rights reserved.
//

#import "APFlipsideViewController.h"

@interface APMainViewController : UIViewController <APFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
