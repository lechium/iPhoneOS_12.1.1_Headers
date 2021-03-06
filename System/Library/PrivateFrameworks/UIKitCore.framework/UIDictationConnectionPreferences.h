/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFPreferences;

@interface UIDictationConnectionPreferences : NSObject {

	AFPreferences* _afPreferences;

}

@property (nonatomic,retain) AFPreferences * afPreferences;              //@synthesize afPreferences=_afPreferences - In the implementation block
+(id)sharedInstance;
-(id)languageCode;
-(BOOL)dictationIsEnabled;
-(id)initSingleton;
-(void)afPreferencesChanged:(id)arg1 ;
-(BOOL)suppressDictationOptIn;
-(BOOL)ignoreServerManualEndpointingThreshold;
-(id)manualEndpointingThreshold;
-(AFPreferences *)afPreferences;
-(void)setAfPreferences:(AFPreferences *)arg1 ;
@end

