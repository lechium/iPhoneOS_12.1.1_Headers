/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNAudioSession.h>

@protocol MNNavigationAudioSessionDelegate;
@class NSString;

@interface MNNavigationAudioSession : NSObject <MNAudioSession> {

	unsigned long long _sessionType;
	NSString* _language;
	id<MNNavigationAudioSessionDelegate> _delegate;
	BOOL _speechEnabled;
	BOOL _muteSpeechOverride;
	unsigned long long _voiceGuidanceLevel;
	unsigned long long _appContext;

}

@property (assign,nonatomic) unsigned long long sessionType;                     //@synthesize sessionType=_sessionType - In the implementation block
@property (nonatomic,readonly) NSString * language;                              //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) unsigned long long appContext;                      //@synthesize appContext=_appContext - In the implementation block
@property (assign,nonatomic) BOOL speechEnabled;                                 //@synthesize speechEnabled=_speechEnabled - In the implementation block
@property (assign,nonatomic) BOOL muteSpeechOverride;                            //@synthesize muteSpeechOverride=_muteSpeechOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long voiceGuidanceLevel;              //@synthesize voiceGuidanceLevel=_voiceGuidanceLevel - In the implementation block
+(id)sessionOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)setMuteSpeechOverride:(BOOL)arg1 ;
-(void)setSpeechEnabled:(BOOL)arg1 ;
-(BOOL)muteSpeechOverride;
-(BOOL)speechEnabled;
-(void)setVoiceGuidanceLevel:(unsigned long long)arg1 ;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)beginSession;
-(void)prepareToAnnounce;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)vibrateForPrompt:(unsigned long long)arg1 ;
-(void)clearAllAnnouncements;
-(unsigned long long)voiceGuidanceLevel;
-(unsigned long long)sessionType;
-(void)setAppContext:(unsigned long long)arg1 ;
-(BOOL)_headphonesAreInUse;
-(BOOL)_isVoiceGuidanceEnabled;
-(BOOL)_beepIfNecessaryWithShortPromptType:(unsigned long long)arg1 textToSpeak:(id)arg2 ;
-(void)_speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setSessionType:(unsigned long long)arg1 ;
-(unsigned long long)appContext;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)stop;
-(void)endSession;
-(NSString *)language;
@end

