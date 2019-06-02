/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRVirtualVoiceInputDeviceDescriptor, NSData;

@interface MRVirtualVoiceInputDevice : NSObject {

	unsigned _deviceID;
	unsigned _recordingState;
	MRVirtualVoiceInputDeviceDescriptor* _descriptor;

}

@property (nonatomic,readonly) unsigned deviceID;                                         //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) MRVirtualVoiceInputDeviceDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) unsigned recordingState;                                     //@synthesize recordingState=_recordingState - In the implementation block
@property (nonatomic,readonly) NSData * data; 
-(unsigned)recordingState;
-(void)setRecordingState:(unsigned)arg1 ;
-(id)initWithDeviceID:(unsigned)arg1 ;
-(unsigned)deviceID;
-(id)description;
-(void)setDescriptor:(MRVirtualVoiceInputDeviceDescriptor *)arg1 ;
-(MRVirtualVoiceInputDeviceDescriptor *)descriptor;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
@end

