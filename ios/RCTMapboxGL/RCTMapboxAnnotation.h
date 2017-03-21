#import "RCTMapboxAnnotation.h"

#import <Mapbox/Mapbox.h>
#import <UIKit/UIKit.h>

#if __has_include(<React/RCTConvert+MapKit.h>)
#import <React/RCTConvert+MapKit.h>
#elif __has_include("RCTConvert+MapKit.h")
#import "RCTConvert+MapKit.h"
#else
#import "React/RCTConvert+MapKit.h"
#endif

#if __has_include(<React/RCTComponent.h>)
#import <React/RCTComponent.h>
#elif __has_include("RCTComponent.h")
#import "RCTComponent.h"
#else
#import "React/RCTComponent.h"
#endif

#import "RCTMapboxGL.h"

@class RCTBridge;

@interface RCTMapboxAnnotation : MGLAnnotationView <MGLAnnotation>

@property (nonatomic, weak, nullable) RCTMapboxGL *map;
@property (nonatomic, weak, nullable) RCTBridge *bridge;
/**
 The center point (specified as a map coordinate) of the annotation. (required)
 (read-only)
 */
@property (nonatomic) CLLocationCoordinate2D coordinate;

/**
 The string containing the annotation’s title.
 
 Although this property is optional, if you support the selection of annotations
 in your map view, you are expected to provide this property. This string is
 displayed in the callout for the associated annotation.
 */
@property (nonatomic, copy, nullable) NSString *id;

/**
 The string containing the annotation’s title.
 
 Although this property is optional, if you support the selection of annotations
 in your map view, you are expected to provide this property. This string is
 displayed in the callout for the associated annotation.
 */
@property (nonatomic, copy, nullable) NSString *title;

/**
 The string containing the annotation’s subtitle.
 
 This string is displayed in the callout for the associated annotation.
 */
@property (nonatomic, copy, nullable) NSString *subtitle;


@end


