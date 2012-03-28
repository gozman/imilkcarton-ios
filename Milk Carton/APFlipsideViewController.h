//
//  APFlipsideViewController.h
//  Milk Carton
//
//  Created by Michael Gozzo on 12-03-28.
//  Copyright (c) 2012 Convoca. All rights reserved.
//

#import <UIKit/UIKit.h>

@class APFlipsideViewController;

@protocol APFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(APFlipsideViewController *)controller;
@end

@interface APFlipsideViewController : UIViewController

@property (weak, nonatomic) IBOutlet id <APFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
