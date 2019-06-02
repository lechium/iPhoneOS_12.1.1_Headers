/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CAReplicatorLayer, CALayer;

@interface NTKRichComplicationDialView : UIView {

	CAReplicatorLayer* _largeTicksReplicatorLayer;
	CALayer* _largeTickLayer;
	double _largeTickPositionY;
	CAReplicatorLayer* _smallTicksReplicatorLayer;
	CALayer* _smallTickLayer;
	double _smallTickPositionY;
	long long _largeTickCount;
	float _progress;

}

@property (nonatomic,readonly) CALayer * largeTickLayer;              //@synthesize largeTickLayer=_largeTickLayer - In the implementation block
@property (nonatomic,readonly) CALayer * smallTickLayer;              //@synthesize smallTickLayer=_smallTickLayer - In the implementation block
@property (assign,nonatomic) float progress;                          //@synthesize progress=_progress - In the implementation block
-(id)initWithLargeTickCount:(long long)arg1 largeTickSize:(CGSize)arg2 smallTickSize:(CGSize)arg3 dialRange:(double)arg4 startAngle:(double)arg5 ;
-(CALayer *)largeTickLayer;
-(CALayer *)smallTickLayer;
-(id)initWithTickCount:(long long)arg1 tickSize:(CGSize)arg2 dialRange:(double)arg3 startAngle:(double)arg4 ;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(float)progress;
@end

