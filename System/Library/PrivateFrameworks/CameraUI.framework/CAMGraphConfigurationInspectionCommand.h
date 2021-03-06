/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration;

@interface CAMGraphConfigurationInspectionCommand : CAMCaptureCommand {

	CAMCaptureGraphConfiguration* __knownGraphConfiguration;
	CAMCaptureGraphConfiguration* __resolvedGraphConfiguration;

}

@property (nonatomic,readonly) CAMCaptureGraphConfiguration * _knownGraphConfiguration;                                                      //@synthesize _knownGraphConfiguration=__knownGraphConfiguration - In the implementation block
@property (setter=_setResolvedGraphConfiguration:,nonatomic,retain) CAMCaptureGraphConfiguration * _resolvedGraphConfiguration;              //@synthesize _resolvedGraphConfiguration=__resolvedGraphConfiguration - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(CAMCaptureGraphConfiguration *)_resolvedGraphConfiguration;
-(void)_setResolvedGraphConfiguration:(id)arg1 ;
-(id)initWithKnownGraphConfiguration:(id)arg1 ;
-(CAMCaptureGraphConfiguration *)_knownGraphConfiguration;
-(long long)_resolvedVideoConfigurationFromContext:(id)arg1 ;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

