/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol MFGroupDetailViewControllerDelegate;
@class MFRecentComposeRecipientGroup;

@interface MFGroupDetailViewController : UITableViewController {

	id<MFGroupDetailViewControllerDelegate> _delegate;
	MFRecentComposeRecipientGroup* _group;

}

@property (assign,nonatomic) id<MFGroupDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MFRecentComposeRecipientGroup * group;                         //@synthesize group=_group - In the implementation block
-(void)_removeButtonTapped:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MFGroupDetailViewControllerDelegate>)arg1 ;
-(id<MFGroupDetailViewControllerDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(MFRecentComposeRecipientGroup *)group;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setGroup:(MFRecentComposeRecipientGroup *)arg1 ;
@end

