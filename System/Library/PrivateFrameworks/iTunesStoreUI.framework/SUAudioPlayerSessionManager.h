/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface SUAudioPlayerSessionManager : NSObject {

	NSMutableDictionary* _sessions;

}

@property (nonatomic,readonly) NSArray * allSessionURLs; 
+(id)sessionManager;
-(NSArray *)allSessionURLs;
-(id)audioPlayerForURL:(id)arg1 ;
-(void)_audioPlayerStatusChangeNotification:(id)arg1 ;
-(id)endSessionForURL:(id)arg1 ;
-(id)stopAllAudioPlayerSessions;
-(id)startSessionWithURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

