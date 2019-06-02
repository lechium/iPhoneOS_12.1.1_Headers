//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKChartPoint.h"

@class NSDate, NSNumber, NSString;

@interface WDChartExperimentsChartPoint : NSObject <HKChartPoint>
{
    NSDate *_xValue;	// 8 = 0x8
    NSNumber *_yValue;	// 16 = 0x10
    id <HKGraphSeriesBlockCoordinateInfo> _experimentInfo;	// 24 = 0x18
}

@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> experimentInfo; // @synthesize experimentInfo=_experimentInfo;
@property(readonly, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(readonly, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
- (void).cxx_destruct;	// IMP=0x0000000100096e80
- (id)userInfo;	// IMP=0x0000000100096e40
- (id)maxYValue;	// IMP=0x0000000100096e30
- (id)minYValue;	// IMP=0x0000000100096e20
- (id)allYValues;	// IMP=0x0000000100096db0
- (id)yValueForKey:(id)arg1;	// IMP=0x0000000100096da0
- (id)maxXValueAsGenericType;	// IMP=0x0000000100096d90
- (id)minXValueAsGenericType;	// IMP=0x0000000100096d80
- (id)xValueAsGenericType;	// IMP=0x0000000100096d70
- (id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100096c88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

