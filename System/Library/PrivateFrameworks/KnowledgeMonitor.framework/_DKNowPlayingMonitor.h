/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKNowPlayingMonitor : _DKMonitor {

	unsigned _lastPlaybackState;

}

@property (assign,nonatomic) unsigned lastPlaybackState;              //@synthesize lastPlaybackState=_lastPlaybackState - In the implementation block
+(id)eventStream;
+(id)entitlements;
+(/*^block*/id)_eventFilterBlock;
+(void)setPlaybackState:(unsigned)arg1 bundleId:(id)arg2 track:(id)arg3 ;
+(id)_metadataFromInfo:(id)arg1 ;
+(id)_eventWithBundleIdentifier:(id)arg1 metadata:(id)arg2 ;
-(void)synchronouslyReflectCurrentValue;
-(void)_registerForNowPlayingNotifications;
-(void)_nowPlayingInfoDidChange:(void*)arg1 ;
-(unsigned)lastPlaybackState;
-(void)setLastPlaybackState:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)deactivate;
@end
