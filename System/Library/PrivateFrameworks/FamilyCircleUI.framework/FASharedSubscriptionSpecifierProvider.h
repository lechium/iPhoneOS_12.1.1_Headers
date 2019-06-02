/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FASharedSubscriptionSpecifierProviderDelegeate;
@class PSListController, PSSpecifier, ACAccount, FASharedServicesResponse, NSOperationQueue, NSArray;

@interface FASharedSubscriptionSpecifierProvider : NSObject {

	PSListController* _presenter;
	PSSpecifier* _spinnerCell;
	ACAccount* _appleAccount;
	FASharedServicesResponse* _sharedSubscriptionResponse;
	BOOL _updateSubsriptionSpecifiers;
	BOOL _isLoadingSpecifiers;
	NSOperationQueue* _networkActivityQueue;
	NSArray* _specifiers;
	id<FASharedSubscriptionSpecifierProviderDelegeate> _delegate;

}

@property (assign,nonatomic,__weak) id<FASharedSubscriptionSpecifierProviderDelegeate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                                                              //@synthesize specifiers=_specifiers - In the implementation block
-(void)setSpecifiers:(NSArray *)arg1 ;
-(id)initWithAppleAccount:(id)arg1 presenter:(id)arg2 ;
-(id)_sharedSubscriptionGroupSpecifier;
-(void)_loadSubscriptionServices;
-(id)_valueForServiceSpecifier:(id)arg1 ;
-(id)_iconURLStringForService:(id)arg1 ;
-(void)_serviceSpecifierWasTapped:(id)arg1 ;
-(void)_handleSubscriptionListResponse:(id)arg1 ;
-(void)reloadSpecifiers;
-(NSArray *)specifiers;
-(void)setDelegate:(id<FASharedSubscriptionSpecifierProviderDelegeate>)arg1 ;
-(id<FASharedSubscriptionSpecifierProviderDelegeate>)delegate;
@end

