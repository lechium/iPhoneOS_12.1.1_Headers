/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/VCUICreateVoiceShortcutViewControllerDelegate.h>

@protocol VCUIAppGalleryViewControllerDelegate;
@class NSString, NSArray, VCUIActionDonationCell;

@interface VCUIAppGalleryViewController : UITableViewController <VCUICreateVoiceShortcutViewControllerDelegate> {

	id<VCUIAppGalleryViewControllerDelegate> _delegate;
	NSString* _applicationBundleIdentifier;
	NSString* _query;
	NSArray* _suggestedDonations;
	NSArray* _recentDonations;
	VCUIActionDonationCell* _prototypeCell;
	double _donationCellHeight;
	double _donationWithSubtitleCellHeight;

}

@property (nonatomic,copy) NSArray * suggestedDonations;                                            //@synthesize suggestedDonations=_suggestedDonations - In the implementation block
@property (nonatomic,copy) NSArray * recentDonations;                                               //@synthesize recentDonations=_recentDonations - In the implementation block
@property (nonatomic,retain) VCUIActionDonationCell * prototypeCell;                                //@synthesize prototypeCell=_prototypeCell - In the implementation block
@property (nonatomic,readonly) double donationCellHeight;                                           //@synthesize donationCellHeight=_donationCellHeight - In the implementation block
@property (nonatomic,readonly) double donationWithSubtitleCellHeight;                               //@synthesize donationWithSubtitleCellHeight=_donationWithSubtitleCellHeight - In the implementation block
@property (assign,nonatomic,__weak) id<VCUIAppGalleryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                                  //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * query;                                               //@synthesize query=_query - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(void)setDelegate:(id<VCUIAppGalleryViewControllerDelegate>)arg1 ;
-(id<VCUIAppGalleryViewControllerDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSString *)query;
-(void)createVoiceShortcutViewControllerDidCancel:(id)arg1 ;
-(void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2 ;
-(void)createVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1 ;
-(void)updateRecommendedShortcuts;
-(void)setupActionDonationCellReuseIdentifiers;
-(void)_setSeparatorInsets;
-(double)donationWithSubtitleCellHeight;
-(double)donationCellHeight;
-(VCUIActionDonationCell *)prototypeCell;
-(double)cellHeightForDonation:(id)arg1 ;
-(void)setNeedsToComputeDonationCellHeights;
-(id)initWithApplicationBundleIdentifier:(id)arg1 query:(id)arg2 ;
-(void)setPrototypeCell:(VCUIActionDonationCell *)arg1 ;
-(id)donationAtIndexPath:(id)arg1 ;
-(NSArray *)suggestedDonations;
-(NSArray *)recentDonations;
-(void)setSuggestedDonations:(NSArray *)arg1 ;
-(void)setRecentDonations:(NSArray *)arg1 ;
@end

