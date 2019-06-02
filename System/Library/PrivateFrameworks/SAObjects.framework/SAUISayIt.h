/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIAudioData, NSString, NSNumber;

@interface SAUISayIt : SABaseClientBoundCommand

@property (nonatomic,retain) SAUIAudioData * audioData; 
@property (assign,nonatomic) BOOL canUseServerTTS; 
@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) BOOL repeatable; 
+(id)sayIt;
+(id)sayItWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(void)_af_extractDialogInfo:(/*^block*/id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(SAUIAudioData *)audioData;
-(void)setAudioData:(SAUIAudioData *)arg1 ;
-(BOOL)canUseServerTTS;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(NSNumber *)listenAfterSpeaking;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(void)setRepeatable:(BOOL)arg1 ;
-(id)groupIdentifier;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(id<SAAceSerializable>)context;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(BOOL)repeatable;
@end

