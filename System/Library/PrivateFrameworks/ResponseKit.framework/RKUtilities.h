/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RKUtilities : NSObject
+(BOOL)prefixInArray:(id)arg1 withArray:(id)arg2 ;
+(BOOL)suffixInArray:(id)arg1 withArray:(id)arg2 ;
+(BOOL)tokenInArray:(id)arg1 withArray:(id)arg2 ;
+(id)normalizeForPersonalization:(id)arg1 ;
+(id)removeEmoji:(id)arg1 ;
+(id)stripDiacritics:(id)arg1 ;
+(id)getDeviceModel;
+(BOOL)isDeviceSupportedForPhotoSharingIntentDetection:(id)arg1 ;
+(id)stripPunctuations:(id)arg1 ;
+(id)removeMultipleWhitespaces:(id)arg1 ;
+(BOOL)isDeviceSupportedForLSTMBasedLanguageIdentification:(id)arg1 ;
+(BOOL)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)arg1 ;
+(BOOL)isLanguageSupportedBySmartPunctuation:(id)arg1 ;
+(id)stripEmojiSkinTones:(id)arg1 ;
+(BOOL)isLanguageSupportedForLemmatization:(id)arg1 ;
+(BOOL)isLanguageSupportedForPartOfSpeech:(id)arg1 ;
@end
