/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NLFoundInAppsPlugin.framework/NLFoundInAppsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FIAPPlugin.h>

@class NSString, DESRecordStore, NSBundle;

@interface NLFoundInAppsPlugin : NSObject <FIAPPlugin> {

	DESRecordStore* _recordStore;
	NSBundle* _FIAPBundle;
	Class _FIAPResult;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
-(id)processSearchableItem:(id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 ;
-(BOOL)isSentMessage:(id)arg1 ;
-(id)languageForText:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
@end

