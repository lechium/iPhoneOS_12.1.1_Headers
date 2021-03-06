/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MSCLAccountStore, MSCLConfiguration, NSArray, MSCLAccount, NSMutableArray, UITableView, NSString;

@interface MSCLSocialServiceSetupViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate> {

	MSCLAccountStore* _accountStore;
	MSCLConfiguration* _configuration;
	NSArray* _facebookPages;
	MSCLAccount* _facebookPagesAccount;
	NSMutableArray* _sections;
	UITableView* _tableView;

}

@property (nonatomic,readonly) MSCLAccountStore * accountStore;                //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) MSCLConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(MSCLAccountStore *)accountStore;
-(id)initWithConfiguration:(id)arg1 accountStore:(id)arg2 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(MSCLConfiguration *)configuration;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

