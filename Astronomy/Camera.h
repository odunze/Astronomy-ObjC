//
//  Camera.h
//  Astronomy
//
//  Created by Lotanna Igwe-Odunze on 3/14/19.
//  Copyright © 2019 Lotanna Igwe-Odunze. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Camera : NSObject

@property NSInteger identifier;
@property NSString *name;
@property NSInteger roverID;
@property NSString *fullName;

@end

NS_ASSUME_NONNULL_END
