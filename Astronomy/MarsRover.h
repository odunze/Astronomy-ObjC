//
//  MarsRover.h
//  Astronomy
//
//  Created by Lotanna Igwe-Odunze on 3/12/19.
//  Copyright © 2019 Lotanna Igwe-Odunze. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SolDescription.h"

NS_ASSUME_NONNULL_BEGIN

@interface MarsRover : NSObject

@property NSString *name;
@property NSDate *launchDate;
@property NSDate *landingDate;

@property NSInteger maxSol;
@property NSDate *maxDate;

@property NSInteger numberOfPhotos;

@property NSArray<SolDescription *> *solDescriptions;

@end

NS_ASSUME_NONNULL_END
