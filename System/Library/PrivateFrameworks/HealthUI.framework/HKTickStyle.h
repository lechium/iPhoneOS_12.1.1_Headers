/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKStrokeStyle.h>

@interface HKTickStyle : HKStrokeStyle {

	BOOL _shouldRenderMajorTickMarks;
	double _tickLength;
	long long _tickDirection;

}

@property (assign,nonatomic) double tickLength;                            //@synthesize tickLength=_tickLength - In the implementation block
@property (assign,nonatomic) long long tickDirection;                      //@synthesize tickDirection=_tickDirection - In the implementation block
@property (assign,nonatomic) BOOL shouldRenderMajorTickMarks;              //@synthesize shouldRenderMajorTickMarks=_shouldRenderMajorTickMarks - In the implementation block
-(double)tickLength;
-(void)setTickLength:(double)arg1 ;
-(long long)tickDirection;
-(void)setTickDirection:(long long)arg1 ;
-(BOOL)shouldRenderMajorTickMarks;
-(void)setShouldRenderMajorTickMarks:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

