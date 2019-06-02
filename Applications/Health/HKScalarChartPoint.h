//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKChartPoint.h"

@class NSNumber, NSString;

@interface HKScalarChartPoint : NSObject <HKChartPoint>
{
    NSNumber *_xValue;	// 8 = 0x8
    NSNumber *_yValue;	// 16 = 0x10
    id <HKGraphSeriesBlockCoordinateInfo> _scalarPointInfo;	// 24 = 0x18
}

@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> scalarPointInfo; // @synthesize scalarPointInfo=_scalarPointInfo;
@property(readonly, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(readonly, nonatomic) NSNumber *xValue; // @synthesize xValue=_xValue;
- (void).cxx_destruct;	// IMP=0x0000000100097140
- (id)userInfo;	// IMP=0x0000000100097100
- (id)maxYValue;	// IMP=0x00000001000970f0
- (id)minYValue;	// IMP=0x00000001000970e0
- (id)allYValues;	// IMP=0x0000000100097070
- (id)yValueForKey:(id)arg1;	// IMP=0x0000000100097060
- (id)maxXValueAsGenericType;	// IMP=0x0000000100097050
- (id)minXValueAsGenericType;	// IMP=0x0000000100097040
- (id)xValueAsGenericType;	// IMP=0x0000000100097030
- (id)initWithPoint:(struct CGPoint)arg1 unitForY:(id)arg2;	// IMP=0x0000000100096ed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
