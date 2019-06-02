/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray, NSString;

@interface OBPrivacyCombinedTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _suppressPerPageAnalyticsLogging;
	BOOL _darkMode;
	UITableView* _tableView;
	NSArray* _privacyFlows;
	NSString* _displayLanguage;
	unsigned long long _displayDeviceType;

}

@property (retain) UITableView * tableView;                                //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSArray * privacyFlows;                                 //@synthesize privacyFlows=_privacyFlows - In the implementation block
@property (assign) BOOL suppressPerPageAnalyticsLogging;                   //@synthesize suppressPerPageAnalyticsLogging=_suppressPerPageAnalyticsLogging - In the implementation block
@property (assign,getter=isDarkMode,nonatomic) BOOL darkMode;              //@synthesize darkMode=_darkMode - In the implementation block
@property (retain) NSString * displayLanguage;                             //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (assign) unsigned long long displayDeviceType;                   //@synthesize displayDeviceType=_displayDeviceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDarkMode;
-(void)setDarkMode:(BOOL)arg1 ;
-(NSString *)displayLanguage;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(BOOL)suppressPerPageAnalyticsLogging;
-(void)setDisplayDeviceType:(unsigned long long)arg1 ;
-(unsigned long long)displayDeviceType;
-(void)setSuppressPerPageAnalyticsLogging:(BOOL)arg1 ;
-(NSArray *)privacyFlows;
-(void)setPrivacyFlows:(NSArray *)arg1 ;
-(id)init;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
@end
