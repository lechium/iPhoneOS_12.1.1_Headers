/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/KeychainSyncViewController.h>

@protocol KeychainSyncViewControllerDelegate;
@class PSKeychainSyncHeaderView, PSSpecifier;

@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController> {

	PSKeychainSyncHeaderView* _headerView;
	PSSpecifier* _groupSpecifier;
	id<KeychainSyncViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<KeychainSyncViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)groupSpecifier;
-(id)specifiers;
-(void)setDelegate:(id<KeychainSyncViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<KeychainSyncViewControllerDelegate>)delegate;
-(id)headerView;
-(double)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
@end
