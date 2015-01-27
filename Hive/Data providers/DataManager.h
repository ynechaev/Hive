//
//  DataManager.h
//  Hive
//
//  Created by Yury Nechaev on 25.01.15.
//  Copyright (c) 2015 Yury Nechaev. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ACAccount;

@interface DataManager : NSObject
+ (void) retrieveAccountFeed:(ACAccount *)account
              withCompletion:(void(^)(NSData *responseData))completionBlock
                     failure:(void(^)(NSError *error))failureBlock;
@end
