//
//  WPNetworkController.h
//  Weather Playground
//
//  Created by wes mb on 10/7/14.
//  Copyright (c) 2014 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>



@interface WPNetworkController : NSObject

+ (AFHTTPSessionManager *)api;

@end
