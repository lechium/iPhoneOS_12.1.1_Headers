/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMExposureCommand : CAMCaptureCommand {

	long long __exposureMode;
	CGPoint __exposurePointOfInterest;

}

@property (nonatomic,readonly) long long _exposureMode;                       //@synthesize _exposureMode=__exposureMode - In the implementation block
@property (nonatomic,readonly) CGPoint _exposurePointOfInterest;              //@synthesize _exposurePointOfInterest=__exposurePointOfInterest - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(long long)_exposureMode;
-(CGPoint)_exposurePointOfInterest;
-(id)initWithExposureMode:(long long)arg1 ;
-(id)initWithExposureMode:(long long)arg1 atPointOfInterest:(CGPoint)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

