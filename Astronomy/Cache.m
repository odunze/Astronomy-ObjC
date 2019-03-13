//
//  Cache.m
//  Astronomy
//
//  Created by Lotanna Igwe-Odunze on 3/12/19.
//  Copyright © 2019 Lotanna Igwe-Odunze. All rights reserved.
//

#import "Cache.h"

@interface Cache ()

@property dispatch_queue_t queue;
@property NSDictionary *cachedItems;

@end

@implementation Cache

- (instancetype)init {
    self = [super init];
    if (self != nil) {
        self.queue = dispatch_queue_create("dev.lotanna.Astronomy.cacheQueue", nil);
        self.cachedItems = [[NSDictionary alloc] init];
    }
    return self;
}

- (id)valueForKey:(id)key {
    return _cachedItems[key];
}

- (void)cacheValue:(id)value forKey:(id)key {
    //    dispatch_async(_queue, ^{
    //    [_cachedItems setObject:value forKey:key];
    //    });
}

@end
