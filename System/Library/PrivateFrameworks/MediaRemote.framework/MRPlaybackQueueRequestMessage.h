/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRPlaybackQueueRequestProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface MRPlaybackQueueRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRPlaybackQueueRequestProtobuf * request; 
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
-(id)initWithRequest:(id)arg1 forPlayerPath:(id)arg2 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(unsigned long long)type;
-(_MRPlaybackQueueRequestProtobuf *)request;
@end

