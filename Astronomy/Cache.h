//
//  Cache.h
//  Astronomy
//
//  Created by Lotanna Igwe-Odunze on 3/12/19.
//  Copyright © 2019 Lotanna Igwe-Odunze. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Cache<Key, Value> : NSObject

- (void)cacheValue: (Value _Nullable)value forKey: (Key)key;

- (Value _Nullable)valueForKey: (Key)key;

@end

NS_ASSUME_NONNULL_END
