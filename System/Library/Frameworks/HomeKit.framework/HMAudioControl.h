/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HMAudioControlDelegate.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMAudioControlDelegate;
@class HMMediaSession, _HMAudioControl, NSString, NSUUID;

@interface HMAudioControl : NSObject <_HMAudioControlDelegate, HMObjectMerge> {

	id<HMAudioControlDelegate> _delegate;
	HMMediaSession* _mediaSession;
	_HMAudioControl* _audioControl;

}

@property (nonatomic,retain) _HMAudioControl * audioControl;              //@synthesize audioControl=_audioControl - In the implementation block
@property (assign) float volume; 
@property (getter=isMuted) BOOL muted; 
@property (__weak) id<HMAudioControlDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) HMMediaSession * mediaSession;                         //@synthesize mediaSession=_mediaSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 ;
-(void)audioControl:(id)arg1 didUpdateVolume:(float)arg2 ;
-(void)audioControl:(id)arg1 didUpdateMuted:(BOOL)arg2 ;
-(id)initWithMediaSession:(id)arg1 ;
-(void)updateVolume:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateMuted:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAudioControl:(_HMAudioControl *)arg1 ;
-(_HMAudioControl *)audioControl;
-(HMMediaSession *)mediaSession;
-(void)setMediaSession:(HMMediaSession *)arg1 ;
-(void)setDelegate:(id<HMAudioControlDelegate>)arg1 ;
-(id<HMAudioControlDelegate>)delegate;
-(NSUUID *)uniqueIdentifier;
-(void)setVolume:(float)arg1 ;
-(float)volume;
@end

