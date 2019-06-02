/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSAESKeyManager : NSObject
+(id)generateIfNecessaryVoiceTriggerProfilesAESKey;
+(id)getVoiceTriggerProfilesAESKey;
+(id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 shouldGenerateIfNecessary:(BOOL)arg4 ;
+(id)generateAESKeyWithKeySizeInBits:(unsigned long long)arg1 ;
+(BOOL)storeAESKeyInKeychain:(id)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 ;
+(id)getAESKeyFromKeychainWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
+(BOOL)deleteAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
+(id)getKeychainAttributesForAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
@end
