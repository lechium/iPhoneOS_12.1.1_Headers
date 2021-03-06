//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconZoomSettings.h"

@interface SBCenterZoomSettings : SBIconZoomSettings
{
    double _centerRowCoordinate;	// 48 = 0x30
    long long _distanceEffect;	// 56 = 0x38
    double _firstHopIncrement;	// 64 = 0x40
    double _hopIncrementAcceleration;	// 72 = 0x48
    double _dockMass;	// 80 = 0x50
}

+ (id)settingsControllerModule;	// IMP=0x000000010013cb80
@property double dockMass; // @synthesize dockMass=_dockMass;
@property double hopIncrementAcceleration; // @synthesize hopIncrementAcceleration=_hopIncrementAcceleration;
@property double firstHopIncrement; // @synthesize firstHopIncrement=_firstHopIncrement;
@property long long distanceEffect; // @synthesize distanceEffect=_distanceEffect;
@property double centerRowCoordinate; // @synthesize centerRowCoordinate=_centerRowCoordinate;
- (void)setDefaultValues;	// IMP=0x000000010013cb18

@end

