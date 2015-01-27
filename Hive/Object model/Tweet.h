//
//  Tweet.h
//  Hive
//
//  Created by Yury Nechaev on 26.01.15.
//  Copyright (c) 2015 Yury Nechaev. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Tweet : NSObject
@property (nonatomic, strong) NSDate *createdAt;
@property (nonatomic, strong) NSString *idStr;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, assign) BOOL truncated;
@property (nonatomic, assign) NSInteger retweetCount;
@property (nonatomic, assign) NSInteger favoriteCount;
@property (nonatomic, strong) NSString *lang;
@property (nonatomic, strong) User *user;
@end
