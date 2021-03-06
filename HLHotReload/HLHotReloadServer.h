//
//  HLHotReloadServer.h
//  HLHotReload
//
//  Created by 刘华龙 on 2020/3/21.
//  Copyright © 2020 刘华龙. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GCDAsyncSocket.h"

NS_ASSUME_NONNULL_BEGIN

@interface HLHotReloadServer : NSObject

- (void)startServer;

- (void)watchDirectory:(NSString *)directory;

@end

NS_ASSUME_NONNULL_END
