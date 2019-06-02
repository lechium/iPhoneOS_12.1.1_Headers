/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKAudioSessionController : NSObject {

	BOOL _active;
	BOOL _dirty;
	unsigned long long _options;

}

@property (getter=isActive) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (getter=isDirty) BOOL dirty;                              //@synthesize dirty=_dirty - In the implementation block
@property (assign) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (readonly) BOOL shouldUseSpeaker; 
@property (readonly) BOOL shouldStopPlayingWhenSilent; 
@property (readonly) BOOL shouldDuckOthers; 
+(id)shareInstance;
+(id)queue;
-(BOOL)isDirty;
-(void)activateWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)audioSessionInterruption:(id)arg1 ;
-(BOOL)shouldUseSpeaker;
-(BOOL)shouldStopPlayingWhenSilent;
-(BOOL)shouldDuckOthers;
-(void)audioSessionRouteChange:(id)arg1 ;
-(void)audioSessionMediaServicesWereLost:(id)arg1 ;
-(void)audioSessionMediaServicesWereReset:(id)arg1 ;
-(void)setActive:(BOOL)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)configureAudioSessionWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(unsigned long long)options;
-(void)setDirty:(BOOL)arg1 ;
-(void)deactivate;
-(void)setOptions:(unsigned long long)arg1 ;
@end
