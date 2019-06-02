/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioSessionChannelDescription, NSString;

@interface TTSAudioSessionChannel : NSObject {

	unsigned _channelLabel;
	AVAudioSessionChannelDescription* _channel;
	NSString* _channelName;
	unsigned long long _channelNumber;
	NSString* _owningPortUID;

}

@property (nonatomic,retain) AVAudioSessionChannelDescription * channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NSString * channelName;                                  //@synthesize channelName=_channelName - In the implementation block
@property (assign,nonatomic) unsigned long long channelNumber;                        //@synthesize channelNumber=_channelNumber - In the implementation block
@property (assign,nonatomic) unsigned channelLabel;                                   //@synthesize channelLabel=_channelLabel - In the implementation block
@property (nonatomic,retain) NSString * owningPortUID;                                //@synthesize owningPortUID=_owningPortUID - In the implementation block
+(id)convertChannels:(id)arg1 ;
+(id)channelWithChannel:(id)arg1 ;
-(NSString *)channelName;
-(void)setChannelNumber:(unsigned long long)arg1 ;
-(void)setChannelName:(NSString *)arg1 ;
-(void)setChannelLabel:(unsigned)arg1 ;
-(void)setOwningPortUID:(NSString *)arg1 ;
-(NSString *)owningPortUID;
-(unsigned long long)channelNumber;
-(unsigned)channelLabel;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setChannel:(AVAudioSessionChannelDescription *)arg1 ;
-(AVAudioSessionChannelDescription *)channel;
@end

