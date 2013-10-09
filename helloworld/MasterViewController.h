//
//  MasterViewController.h
//  helloworld
//
//  Created by mac 10.8 vm on 13-10-9.
//  Copyright (c) 2013年 mac 10.8 vm. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
