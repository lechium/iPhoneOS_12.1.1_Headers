/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFocusCommand : CAMCaptureCommand {

	BOOL __shouldUseSmoothFocus;
	long long __focusMode;
	CGPoint __focusPointOfInterest;

}

@property (nonatomic,readonly) long long _focusMode;                       //@synthesize _focusMode=__focusMode - In the implementation block
@property (nonatomic,readonly) CGPoint _focusPointOfInterest;              //@synthesize _focusPointOfInterest=__focusPointOfInterest - In the implementation block
@property (nonatomic,readonly) BOOL _shouldUseSmoothFocus;                 //@synthesize _shouldUseSmoothFocus=__shouldUseSmoothFocus - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(long long)_focusMode;
-(id)initWithFocusMode:(long long)arg1 smooth:(BOOL)arg2 ;
-(id)initWithFocusMode:(long long)arg1 ;
-(id)initWithFocusMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2 smooth:(BOOL)arg3 ;
-(BOOL)_shouldUseSmoothFocus;
-(CGPoint)_focusPointOfInterest;
-(id)initWithFocusMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

