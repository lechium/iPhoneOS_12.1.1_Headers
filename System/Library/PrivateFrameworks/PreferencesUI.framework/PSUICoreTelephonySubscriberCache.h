/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

@interface PSUICoreTelephonySubscriberCache : NSObject <CoreTelephonyClientSubscriberDelegate> {

	CoreTelephonyClient* _client;
	NSMutableDictionary* _mobileEquipmentInfoDict;
	NSMutableDictionary* _isoCountryCodesDict;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                     //@synthesize client=_client - In the implementation block
@property (retain) NSMutableDictionary * mobileEquipmentInfoDict;              //@synthesize mobileEquipmentInfoDict=_mobileEquipmentInfoDict - In the implementation block
@property (retain) NSMutableDictionary * isoCountryCodesDict;                  //@synthesize isoCountryCodesDict=_isoCountryCodesDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)mobileEquipmentInfo:(id)arg1 ;
-(unsigned long long)mobileEquipmentInfoLength;
-(id)shortLabel:(id)arg1 ;
-(id)isoCountryCode:(id)arg1 ;
-(void)setMobileEquipmentInfoDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mobileEquipmentInfoDict;
-(void)fetchMobileEquipmentInfo;
-(NSMutableDictionary *)isoCountryCodesDict;
-(void)fetchCountryCodes;
-(void)setIsoCountryCodesDict:(NSMutableDictionary *)arg1 ;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(id)initPrivate;
-(id)init;
-(void)willEnterForeground;
@end

