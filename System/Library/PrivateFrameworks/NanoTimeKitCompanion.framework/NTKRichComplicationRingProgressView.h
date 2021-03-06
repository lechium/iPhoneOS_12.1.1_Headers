/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationProgressView.h>

@class NTKRichComplicationRingView;

@interface NTKRichComplicationRingProgressView : NTKRichComplicationProgressView {

	double _curveWidth;
	NTKRichComplicationRingView* _backgroundView;
	NTKRichComplicationRingView* _foregroundView;
	BOOL _clockwise;

}

@property (assign,nonatomic) BOOL clockwise;              //@synthesize clockwise=_clockwise - In the implementation block
-(id)initWithCurveWidth:(double)arg1 padding:(double)arg2 forDevice:(id)arg3 ;
-(void)setClockwise:(BOOL)arg1 ;
-(BOOL)clockwise;
@end

