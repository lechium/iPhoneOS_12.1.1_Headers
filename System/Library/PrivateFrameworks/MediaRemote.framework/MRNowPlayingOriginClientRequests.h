/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, _MRDeviceInfoMessageProtobuf, NSMutableArray, NSMutableDictionary, _MROriginProtobuf;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	unsigned _volumeCapabilities;
	float _volume;
	NSMutableArray* _nowPlayingClients;
	NSMutableDictionary* _transactionCallbacks;
	_MROriginProtobuf* _origin;

}

@property (nonatomic,readonly) _MROriginProtobuf * origin;                         //@synthesize origin=_origin - In the implementation block
@property (nonatomic,copy) _MRDeviceInfoMessageProtobuf * deviceInfo; 
@property (assign,nonatomic) unsigned volumeCapabilities; 
@property (assign,nonatomic) float volume; 
-(void)setVolumeCapabilities:(unsigned)arg1 ;
-(unsigned)volumeCapabilities;
-(void)restoreNowPlayingClientState;
-(id)initWithOrigin:(id)arg1 ;
-(id)nowPlayingClients;
-(id)nowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(void)setTransactionCallback:(/*^block*/id)arg1 forName:(unsigned long long)arg2 ;
-(/*^block*/id)transactionCallbackForName:(unsigned long long)arg1 ;
-(void)setDeviceInfo:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(id)debugDescription;
-(_MROriginProtobuf *)origin;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(void)removeClient:(id)arg1 ;
@end
