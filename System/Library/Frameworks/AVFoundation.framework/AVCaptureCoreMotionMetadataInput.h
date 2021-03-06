/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureCoreMotionMetadataInputInternal, NSString;

@interface AVCaptureCoreMotionMetadataInput : AVCaptureInput {

	AVCaptureCoreMotionMetadataInputInternal* _internal;

}

@property (nonatomic,readonly) NSString * sourceID; 
+(id)coreMotionMetadataInput;
+(void)initialize;
-(OpaqueCMClockRef)clock;
-(id)ports;
-(NSString *)sourceID;
-(id)init;
-(void)dealloc;
@end

