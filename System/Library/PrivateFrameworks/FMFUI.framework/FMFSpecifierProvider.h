/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAUISpecifierProvider.h>

@protocol AAUISpecifierProviderDelegate;
@class NSArray, AAUIAccountManager, NSString;

@interface FMFSpecifierProvider : NSObject <AAUISpecifierProvider> {

	id<AAUISpecifierProviderDelegate> _delegate;
	NSArray* _specifiers;
	AAUIAccountManager* _accountManager;

}

@property (nonatomic,retain) AAUIAccountManager * accountManager;                            //@synthesize accountManager=_accountManager - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISpecifierProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                                             //@synthesize specifiers=_specifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpecifiers:(NSArray *)arg1 ;
-(BOOL)shouldShowLocationSharingSpecifier;
-(void)locationSharingSpecifierWasTapped:(id)arg1 ;
-(BOOL)shouldEnableLocationSharingSpecifier;
-(BOOL)isAccountInGrayMode;
-(BOOL)locationServicesDisabledByRestrictions;
-(id)initWithAccountManager:(id)arg1 ;
-(NSArray *)specifiers;
-(AAUIAccountManager *)accountManager;
-(void)setAccountManager:(AAUIAccountManager *)arg1 ;
-(void)setDelegate:(id<AAUISpecifierProviderDelegate>)arg1 ;
-(id<AAUISpecifierProviderDelegate>)delegate;
@end

