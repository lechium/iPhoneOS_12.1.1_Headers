/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NTKCharacterTimeView, CADisplayLink;

@interface NTKCharacterDisplayLink : NSObject {

	NTKCharacterTimeView* _timeView;
	CADisplayLink* _displayLink;

}
-(void)drawView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 loader:(id)arg2 ;
-(void)invalidate;
-(void)setPaused:(BOOL)arg1 ;
-(void)setAnimationFrameInterval:(long long)arg1 ;
@end
