//
//  SolDescription.h
//  Astronomy
//
//  Created by Lotanna Igwe-Odunze on 3/12/19.
//  Copyright © 2019 Lotanna Igwe-Odunze. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SolDescription : NSObject

@property NSInteger sol;
@property NSInteger totalPhotos;
@property NSArray<NSString *> *cameras;

@end

NS_ASSUME_NONNULL_END
