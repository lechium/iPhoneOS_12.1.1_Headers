/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/SFAirDropDiscoveryControllerDelegate.h>

@class SFAirDropDiscoveryController, PSSpecifier, NSString;

@interface PSUIAirDropController : PSListController <SFAirDropDiscoveryControllerDelegate> {

	SFAirDropDiscoveryController* _airDropDiscoveryController;
	PSSpecifier* _groupSpecifier;
	PSSpecifier* _offSpecifier;
	PSSpecifier* _contactsOnlySpecifier;
	PSSpecifier* _everyoneSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)discoveryControllerVisibilityDidChange:(id)arg1 ;
-(void)discoveryControllerSettingsDidChange:(id)arg1 ;
-(void)_updateSpecifiersFromPreferences;
-(void)_refreshFooterForSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(void)loadView;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
@end
