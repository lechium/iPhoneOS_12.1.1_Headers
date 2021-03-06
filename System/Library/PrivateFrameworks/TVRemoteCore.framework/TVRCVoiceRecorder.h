/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVRCDevice;

@interface TVRCVoiceRecorder : NSObject {

	TVRCDevice* _device;
	BOOL _recordsAutomatically;

}

@property (assign,nonatomic) BOOL recordsAutomatically; 
-(BOOL)recordsAutomatically;
-(void)setRecordsAutomatically:(BOOL)arg1 ;
-(id)_initWithDevice:(id)arg1 ;
-(void)stop;
-(void)start;
@end

