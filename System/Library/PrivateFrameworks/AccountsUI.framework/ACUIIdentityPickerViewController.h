/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/AccountsUI-Structs.h>
#import <Preferences/PSListController.h>

@protocol ACUIIdentityPickerViewControllerDelegate;
@class NSString, NSArray;

@interface ACUIIdentityPickerViewController : PSListController {

	id<ACUIIdentityPickerViewControllerDelegate> _delegate;
	NSString* _property;
	NSArray* _identities;
	NSArray* _emailAddresses;
	BOOL _userInteractiveSwitch;
	BOOL _userInteractiveIdentityList;
	BOOL _allowIdentitySelectionForDisabledSwitch;

}

@property (nonatomic,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
-(void)_finishedFetchingIdentities:(id)arg1 ;
-(SecIdentityRef)_selectedIdentity;
-(BOOL)_isPropertyEnabled;
-(void)_setValue:(id)arg1 forSwitchSpecifier:(id)arg2 ;
-(id)_valueForSwitchSpecifier:(id)arg1 ;
-(id)_specifiersForIdentities:(id)arg1 ;
-(SecIdentityRef)_identityToAutoselectWithEnabled:(BOOL)arg1 ;
-(void)_setPropertyEnabled:(BOOL)arg1 identity:(SecIdentityRef)arg2 ;
-(void)_updateCell:(id)arg1 selected:(BOOL)arg2 ;
-(BOOL)_allowIdentitySelection;
-(id)_identitySpecifiers;
-(NSString *)property;
-(id)specifiers;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

