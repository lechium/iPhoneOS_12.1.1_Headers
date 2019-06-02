/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMImageControlModeCommand : CAMCaptureCommand {

	long long __captureMode;

}

@property (nonatomic,readonly) long long _captureMode;              //@synthesize _captureMode=__captureMode - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(id)initWithCaptureMode:(long long)arg1 ;
-(long long)_captureMode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
