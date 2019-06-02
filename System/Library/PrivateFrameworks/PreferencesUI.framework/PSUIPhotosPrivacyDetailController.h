/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PSUIPhotosPrivacyDetailController : PSListController {

	NSArray* _orderdAuthTypes;
	NSDictionary* _serviceLevelsByAuthType;
	NSMutableDictionary* _grantStatusByAuthType;
	NSMutableDictionary* _specifierByAuthType;

}
-(CFBundleRef)appBundle;
-(void)_updateAuthStatus;
-(void)_updateSpecifiers;
-(void)_updateSpecifiersUI;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(void)_reloadAuthorizations;
-(void)_refreshLinkStatusInParent;
-(id)specifiers;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
@end

