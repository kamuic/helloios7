//
//  MyData.h
//  helloworld
//
//  Created by mac 10.8 vm on 14-6-9.
//  Copyright (c) 2014年 mac 10.8 vm. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MyData : NSObject

@property(nonatomic,strong) NSString* name;
@property(nonatomic) NSUInteger age;
@property(nonatomic) float height;
@property(nonatomic,strong) NSDictionary* background;
@property(nonatomic,strong) NSArray* habbits;
@property(nonatomic) BOOL single;

-(id) initWithName:(NSString*) name andAge:(NSInteger) age;

@end
