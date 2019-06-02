/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary, NSAttributedString;

@interface VSSpeechRequest : NSObject <NSSecureCoding> {

	BOOL _shouldCache;
	BOOL _disableCompactVoiceFallback;
	BOOL _forceServerTTS;
	BOOL _canUseServerTTS;
	BOOL _useCustomVoice;
	BOOL _audioSessionIDIsValid;
	BOOL _maintainsInput;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	NSString* _text;
	NSString* _languageCode;
	long long _footprint;
	long long _voiceType;
	long long _gender;
	NSURL* _outputPath;
	double _rate;
	double _pitch;
	double _volume;
	NSDictionary* _contextInfo;
	NSURL* _resourceListURL;
	NSURL* _resourceSearchPathURL;
	NSAttributedString* _attributedText;
	NSString* _voiceName;
	NSString* _clientBundleIdentifier;
	unsigned long long _requestCreatedTimestamp;
	/*^block*/id _stopHandler;
	/*^block*/id _pauseHandler;
	long long _pointer;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) BOOL useCustomVoice;                                     //@synthesize useCustomVoice=_useCustomVoice - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                                      //@synthesize voiceName=_voiceName - In the implementation block
@property (assign,nonatomic) BOOL audioSessionIDIsValid;                              //@synthesize audioSessionIDIsValid=_audioSessionIDIsValid - In the implementation block
@property (assign,nonatomic) BOOL maintainsInput;                                     //@synthesize maintainsInput=_maintainsInput - In the implementation block
@property (assign,nonatomic) unsigned audioQueueFlags;                                //@synthesize audioQueueFlags=_audioQueueFlags - In the implementation block
@property (nonatomic,copy) NSString * clientBundleIdentifier;                         //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long requestCreatedTimestamp;              //@synthesize requestCreatedTimestamp=_requestCreatedTimestamp - In the implementation block
@property (nonatomic,copy) id stopHandler;                                            //@synthesize stopHandler=_stopHandler - In the implementation block
@property (nonatomic,copy) id pauseHandler;                                           //@synthesize pauseHandler=_pauseHandler - In the implementation block
@property (assign,nonatomic) long long pointer;                                       //@synthesize pointer=_pointer - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                                   //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) long long footprint;                                     //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) long long voiceType;                                     //@synthesize voiceType=_voiceType - In the implementation block
@property (assign,nonatomic) long long gender;                                        //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSURL * outputPath;                                        //@synthesize outputPath=_outputPath - In the implementation block
@property (assign,nonatomic) BOOL shouldCache;                                        //@synthesize shouldCache=_shouldCache - In the implementation block
@property (assign,nonatomic) double rate;                                             //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) double pitch;                                            //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double volume;                                           //@synthesize volume=_volume - In the implementation block
@property (nonatomic,copy) NSDictionary * contextInfo;                                //@synthesize contextInfo=_contextInfo - In the implementation block
@property (assign,nonatomic) BOOL disableCompactVoiceFallback;                        //@synthesize disableCompactVoiceFallback=_disableCompactVoiceFallback - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                                 //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (assign,nonatomic) BOOL forceServerTTS;                                     //@synthesize forceServerTTS=_forceServerTTS - In the implementation block
@property (assign,nonatomic) BOOL canUseServerTTS;                                    //@synthesize canUseServerTTS=_canUseServerTTS - In the implementation block
@property (nonatomic,copy) NSURL * resourceListURL;                                   //@synthesize resourceListURL=_resourceListURL - In the implementation block
@property (nonatomic,copy) NSURL * resourceSearchPathURL;                             //@synthesize resourceSearchPathURL=_resourceSearchPathURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(long long)voiceType;
-(void)setVoiceType:(long long)arg1 ;
-(BOOL)canUseServerTTS;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(void)setRequestCreatedTimestamp:(unsigned long long)arg1 ;
-(BOOL)forceServerTTS;
-(id)stopHandler;
-(void)setStopHandler:(id)arg1 ;
-(id)contextInfoString;
-(BOOL)disableCompactVoiceFallback;
-(void)setDisableCompactVoiceFallback:(BOOL)arg1 ;
-(NSURL *)resourceListURL;
-(void)setResourceListURL:(NSURL *)arg1 ;
-(NSURL *)resourceSearchPathURL;
-(void)setResourceSearchPathURL:(NSURL *)arg1 ;
-(BOOL)useCustomVoice;
-(void)setUseCustomVoice:(BOOL)arg1 ;
-(BOOL)audioSessionIDIsValid;
-(void)setAudioSessionIDIsValid:(BOOL)arg1 ;
-(BOOL)maintainsInput;
-(void)setMaintainsInput:(BOOL)arg1 ;
-(unsigned)audioQueueFlags;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(void)setPointer:(long long)arg1 ;
-(unsigned)audioSessionID;
-(void)setFootprint:(long long)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(void)setVoiceName:(NSString *)arg1 ;
-(NSString *)voiceName;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(long long)pointer;
-(void)setShouldCache:(BOOL)arg1 ;
-(id)pauseHandler;
-(void)setPauseHandler:(id)arg1 ;
-(void)setGender:(long long)arg1 ;
-(long long)gender;
-(NSDictionary *)contextInfo;
-(void)setContextInfo:(NSDictionary *)arg1 ;
-(unsigned long long)requestCreatedTimestamp;
-(long long)footprint;
-(NSString *)clientBundleIdentifier;
-(NSURL *)outputPath;
-(void)setOutputPath:(NSURL *)arg1 ;
-(BOOL)isSimilarTo:(id)arg1 ;
-(void)setForceServerTTS:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setVolume:(double)arg1 ;
-(double)volume;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(NSString *)languageCode;
-(BOOL)shouldCache;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

