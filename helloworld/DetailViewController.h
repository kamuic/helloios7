//
//  DetailViewController.h
//  helloworld
//
//  Created by mac 10.8 vm on 13-10-9.
//  Copyright (c) 2013年 mac 10.8 vm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
