/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class CKConversation;

@interface CKStarkConversationListViewController : UITableViewController {

	CKConversation* _selectedConversation;

}

@property (nonatomic,retain) CKConversation * selectedConversation;              //@synthesize selectedConversation=_selectedConversation - In the implementation block
-(void)conversationListDidChange:(id)arg1 ;
-(void)_handleNewComposePressed:(id)arg1 ;
-(CKConversation *)selectedConversation;
-(void)setSelectedConversation:(CKConversation *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
@end

