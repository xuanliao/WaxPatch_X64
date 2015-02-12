//
//  ViewController.h
//  WaxPatch_X64
//
//  Created by maxfong on 15/2/5.
//  Copyright (c) 2015年 maxfong. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^VCTestBlock)(NSString *string);

@interface ViewController : UIViewController <UIAlertViewDelegate>

@property (nonatomic, weak) IBOutlet UILabel *lblMessage;

@property (nonatomic, copy) VCTestBlock testBlock;

- (IBAction)click:(id)sender;
- (IBAction)loadLua:(id)sender;

@end

