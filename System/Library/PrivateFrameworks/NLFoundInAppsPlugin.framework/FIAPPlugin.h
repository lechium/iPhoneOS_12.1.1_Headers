/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NLFoundInAppsPlugin.framework/NLFoundInAppsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FIAPPlugin <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@optional
-(id)setup;
-(id)processSearchableItem:(id)arg1;
-(id)processUserAction:(id)arg1 searchableItem:(id)arg2;
-(id)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;

@required
-(NSString *)identifier;

@end

