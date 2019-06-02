/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTPreferences : NSObject
+(unsigned long long)_deviceCategoryForDeviceProductType:(id)arg1 ;
+(id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1 ;
+(id)sharedPreferences;
-(BOOL)voiceTriggerEnabled;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
-(BOOL)fileLoggingIsEnabled;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(BOOL)_voiceTriggerEnabled;
-(id)_localeIdentifier;
-(BOOL)_isSATMarkedForMarker:(id)arg1 languageCode:(id)arg2 ;
-(id)_getSATEnrollmentAudioPathForLanguageCode:(id)arg1 ;
-(id)_VTSATBasePath;
-(id)_VTSATCachePath;
-(BOOL)_isLocalVoiceTriggerAvailable;
-(id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg1 ;
-(BOOL)hasExplicitlySetVoiceTriggerEnabled;
-(BOOL)phraseSpotterEnabled;
-(void)setPhraseSpotterEnabled:(BOOL)arg1 ;
-(BOOL)voiceTriggerEnabledWhenChargerDisconnected;
-(void)setVoiceTriggerEnabledWhenChargerDisconnected:(BOOL)arg1 ;
-(BOOL)voiceTriggerEnabledWhenChargerConnected;
-(void)setVoiceTriggerEnabledWhenChargerConnected:(BOOL)arg1 ;
-(id)localizedTriggerPhrase;
-(void)setSecondPassAudioLoggingEnabled:(BOOL)arg1 ;
-(BOOL)onetimeRemoteAssetQueryRanSuccessfully;
-(void)setOnetimeRemoteAssetQueryRanSuccessfully:(BOOL)arg1 ;
-(void)discardAllSATEnrollment;
-(id)getMD5HashForSATEnrollmentAudioForLanguageCode:(id)arg1 ;
-(id)getSATEnrollmentPath;
-(BOOL)gestureSubscriptionEnabled;
-(BOOL)isVoiceTriggerAvailable;
-(BOOL)isRemoteVoiceTriggerAvailable;
-(BOOL)isSATAvailable;
-(BOOL)useSiriActivationSPIForiOS;
-(BOOL)useSiriActivationSPIForwatchOS;
-(id)_languageCode;
-(void)_setVoiceTriggerEnabled:(BOOL)arg1 ;
-(BOOL)_storeModeEnabled;
-(void)setFileLoggingLevel:(id)arg1 ;
-(id)fileLoggingLevel;
-(BOOL)isSATEnrolledForLanguageCode:(id)arg1 ;
-(BOOL)voiceTriggerInCoreSpeech;
-(BOOL)secondPassAudioLoggingEnabled;
-(id)audioInjectionFilePath;
-(BOOL)isSATEnrollmentMigratedForLanguageCode:(id)arg1 ;
-(void)discardSATEnrollmentForLanguageCode:(id)arg1 ;
-(void)markSATEnrollmentSuccessForLanguageCode:(id)arg1 ;
-(BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg1 ;
-(void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg1 ;
-(id)localizedTriggerPhraseForLanguageCode:(id)arg1 ;
-(id)init;
-(void)synchronize;
@end
