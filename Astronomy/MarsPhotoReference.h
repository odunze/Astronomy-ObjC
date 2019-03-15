//
//  MarsPhotoReference.h
//  Astronomy
//
//  Created by Lotanna Igwe-Odunze on 3/14/19.
//  Copyright © 2019 Lotanna Igwe-Odunze. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DRMCamera.h"

NS_ASSUME_NONNULL_BEGIN

@interface MarsPhotoReference : NSObject

@property NSInteger identifier;
@property NSInteger sol;
@property Camera *camera;
@property NSDate *earthDate;
@property NSURL *imageURL;

@end

NS_ASSUME_NONNULL_END
