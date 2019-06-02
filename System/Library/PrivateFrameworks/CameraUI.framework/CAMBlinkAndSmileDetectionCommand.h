/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMBlinkAndSmileDetectionCommand : CAMCaptureCommand {

	BOOL __blinkDetectionEnabled;
	BOOL __smileDetectionEnabled;

}

@property (getter=_isBlinkDetectionEnabled,nonatomic,readonly) BOOL _blinkDetectionEnabled;              //@synthesize _blinkDetectionEnabled=__blinkDetectionEnabled - In the implementation block
@property (getter=_isSmileDetectionEnabled,nonatomic,readonly) BOOL _smileDetectionEnabled;              //@synthesize _smileDetectionEnabled=__smileDetectionEnabled - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(BOOL)_isBlinkDetectionEnabled;
-(BOOL)_isSmileDetectionEnabled;
-(id)initWithBlinkDetection:(BOOL)arg1 smileDetection:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

