/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface PSUIIncompatibleAppsController : PSListController {

	NSArray* _updates;

}

@property (nonatomic,retain) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(BOOL)proxyWillBeDeprecatedFor32Bit:(id)arg1 ;
+(id)incompatible3rdPartyAppProxies;
-(void)setUpdates:(NSArray *)arg1 ;
-(void)refreshAvailableSoftwareUpdates;
-(void)openStoreForSpecifier:(id)arg1 ;
-(BOOL)updateIsAvailableForBundleID:(id)arg1 ;
-(void)handleAppsChangedNotification;
-(id)specifiers;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSArray *)updates;
@end

