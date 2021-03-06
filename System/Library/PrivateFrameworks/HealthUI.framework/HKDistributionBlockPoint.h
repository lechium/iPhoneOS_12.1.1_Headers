/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSArray, NSString;

@interface HKDistributionBlockPoint : NSObject <HKGraphSeriesBlockCoordinate> {

	NSArray* _distributionSegments;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	CGPoint _minPoint;
	CGPoint _maxPoint;

}

@property (nonatomic,readonly) CGPoint minPoint;                                           //@synthesize minPoint=_minPoint - In the implementation block
@property (nonatomic,readonly) CGPoint maxPoint;                                           //@synthesize maxPoint=_maxPoint - In the implementation block
@property (nonatomic,readonly) NSArray * distributionSegments;                             //@synthesize distributionSegments=_distributionSegments - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3 ;
-(CGPoint)minPoint;
-(NSArray *)distributionSegments;
-(CGPoint)maxPoint;
-(id)_quickDate:(id)arg1 ;
-(id)_segmentsFromChartPoint:(id)arg1 forX:(double)arg2 minY:(double)arg3 maxY:(double)arg4 ;
-(id)_applyTransformToSegments:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(id)initWithTransform:(CGAffineTransform)arg1 blockPoint:(id)arg2 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(NSString *)description;
@end

