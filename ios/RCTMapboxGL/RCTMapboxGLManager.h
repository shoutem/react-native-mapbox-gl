//
//  RCTMapboxGLManager.h
//  RCTMapboxGL
//
//  Created by Bobby Sudekum on 4/30/15.
//  Copyright (c) 2015 Mapbox. All rights reserved.
//

#if __has_include(<React/RCTViewManager.h>)
#import <React/RCTViewManager.h>
#elif __has_include("RCTViewManager.h")
#import "RCTViewManager.h"
#else
#import "React/RCTViewManager.h"
#endif

@interface RCTMapboxGLManager : RCTViewManager {
    NSMutableSet * _recentPacks;
    NSMutableSet * _throttledPacks;
    NSMutableArray * _packRequests;
    NSMutableSet * _removedPacks;
    int _throttleInterval;
    BOOL _loadedPacks;
    NSMutableSet * _loadingPacks;
}
@end