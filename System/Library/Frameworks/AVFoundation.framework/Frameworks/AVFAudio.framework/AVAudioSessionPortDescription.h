/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * portType; 
@property (readonly) NSString * portName; 
@property (readonly) NSString * UID; 
@property (readonly) BOOL hasHardwareVoiceCallProcessing; 
@property (readonly) NSArray * channels; 
@property (readonly) NSArray * dataSources; 
@property (readonly) AVAudioSessionDataSourceDescription * selectedDataSource; 
@property (readonly) AVAudioSessionDataSourceDescription * preferredDataSource; 
+(id)privateCreateArray:(id)arg1 owningSession:(id)arg2 ;
-(NSString *)portType;
-(PortDescriptionImpl*)privateGetImplementation;
-(id)privateGetID;
-(BOOL)isEqualToPort:(id)arg1 compareStrict:(BOOL)arg2 ;
-(void)configureChannelsAndDataSources:(id)arg1 ;
-(id)initWithRawPortDescription:(id)arg1 owningSession:(id)arg2 ;
-(BOOL)hasHardwareVoiceCallProcessing;
-(BOOL)isLiveListenSupported;
-(AVAudioSessionDataSourceDescription *)preferredDataSource;
-(BOOL)isHeadphones;
-(unsigned long long)endpointType;
-(NSString *)UID;
-(NSArray *)dataSources;
-(id)initWithSession:(id)arg1 ;
-(NSString *)portName;
-(AVAudioSessionDataSourceDescription *)selectedDataSource;
-(BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)channels;
@end

