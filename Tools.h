//
//  Tools.h
//  day18
//
//  Created by moxuyou on 15/6/29.
//  Copyright (c) 2015年 moxuyou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Singleton.h"

@interface Tools : NSObject<NSCopying, NSMutableCopying>

// share + 当前的类名
//+ (instancetype)shareTools;

interfaceSingleton(Tools);

@end
