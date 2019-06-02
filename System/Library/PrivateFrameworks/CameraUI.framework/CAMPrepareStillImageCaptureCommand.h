/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPrepareStillImageCaptureCommand : CAMCaptureCommand {

	unsigned long long __systemTimeOfCapture;

}

@property (nonatomic,readonly) unsigned long long _systemTimeOfCapture;              //@synthesize _systemTimeOfCapture=__systemTimeOfCapture - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(unsigned long long)_systemTimeOfCapture;
-(id)initWithSystemTime:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

