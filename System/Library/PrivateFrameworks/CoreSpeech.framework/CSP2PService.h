/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSADCompanionServiceProvider, OS_dispatch_queue;
@class NSObject, NSString;

@interface CSP2PService : NSObject {

	id<CSADCompanionServiceProvider> _adCompanionServiceProvider;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _lastCommunicatedPeer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * lastCommunicatedPeer;                                                 //@synthesize lastCommunicatedPeer=_lastCommunicatedPeer - In the implementation block
@property (assign,nonatomic,__weak) id<CSADCompanionServiceProvider> adCompanionServiceProvider;              //@synthesize adCompanionServiceProvider=_adCompanionServiceProvider - In the implementation block
+(id)sharedInstance;
-(void)sendInfo1ToNearbyPeer;
-(void)sendInfo2ToNearbyPeer;
-(void)_processRemoteHeySiriCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_processParallelRecordingCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_sendParallelRecordingsToPeerId:(id)arg1 voiceProfileRequestInfo:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_receiveParallelRecordingFromPeerId:(id)arg1 recordingInfo:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_receiveVoiceProfileFromPeerId:(id)arg1 voiceProfileInfo:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_processDataFetchCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_processVoiceProfileDeleteCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_receiveData1FromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_sendData1ToPeerId:(id)arg1 ;
-(void)_sendData2ToPeerId:(id)arg1 ;
-(void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 compressedFileAvailable:(/*^block*/id)arg3 ;
-(void)_sendData1File:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(BOOL)arg4 ;
-(void)processRemoteCommandWithPayload:(id)arg1 fromPeer:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(id<CSADCompanionServiceProvider>)adCompanionServiceProvider;
-(void)setAdCompanionServiceProvider:(id<CSADCompanionServiceProvider>)arg1 ;
-(NSString *)lastCommunicatedPeer;
-(void)setLastCommunicatedPeer:(NSString *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

