/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import "RCTMapboxAnnotationManager.h"

#if __has_include(<React/RCTUIManager.h>)
#import <React/RCTUIManager.h>
#elif __has_include("RCTUIManager.h")
#import "RCTUIManager.h"
#else
#import "React/RCTUIManager.h"
#endif

#if __has_include(<React/RCTConvert+CoreLocation.h>)
#import <React/RCTConvert+CoreLocation.h>
#elif __has_include("RCTConvert+CoreLocation.h")
#import "RCTConvert+CoreLocation.h"
#else
#import "React/RCTConvert+CoreLocation.h"
#endif

#if __has_include(<React/UIView+React.h>)
#import <React/UIView+React.h>
#elif __has_include("UIView+React.h")
#import "UIView+React.h"
#else
#import "React/UIView+React.h"
#endif

#import "RCTMapboxAnnotation.h"

@interface RCTMapboxAnnotationManager () <MGLMapViewDelegate>

@end

@implementation RCTMapboxAnnotationManager

RCT_EXPORT_MODULE()

- (UIView *)view
{
    RCTMapboxAnnotation *marker = [[RCTMapboxAnnotation alloc] init];
//    UITapGestureRecognizer *tapGestureRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(_handleTap:)];
//    // setting this to NO allows the parent MapView to continue receiving marker selection events
//    tapGestureRecognizer.cancelsTouchesInView = NO;
//    [marker addGestureRecognizer:tapGestureRecognizer];
    marker.bridge = self.bridge;
    return marker;
}

RCT_EXPORT_VIEW_PROPERTY(id, NSString)
RCT_EXPORT_VIEW_PROPERTY(title, NSString)
RCT_EXPORT_VIEW_PROPERTY(subtitle, NSString)
RCT_EXPORT_VIEW_PROPERTY(coordinate, CLLocationCoordinate2D)

@end
