/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class WRCannedRepliesStore, PSSpecifier, UIImage;

@interface WRCannedRepliesViewController : PSListController {

	WRCannedRepliesStore* _repliesStore;
	PSSpecifier* _addNewSpecifier;
	PSSpecifier* _smartRepliesSpecifier;
	UIImage* _accessoryImage;
	UIImage* _highlightedAccessoryImage;
	BOOL _supportedEnhancedEditing;
	unsigned long long _category;

}

@property (nonatomic,readonly) unsigned long long category;              //@synthesize category=_category - In the implementation block
-(void)_returnKeyPressed:(id)arg1 ;
-(id)cannedReplies;
-(void)updateEditDoneButton;
-(id)specifiers;
-(void)returnPressedAtEnd;
-(void)saveReplies;
-(void)setIncludeSmartReplies:(id)arg1 specifier:(id)arg2 ;
-(id)includeSmartReplies;
-(id)newCannedReplySpecifier;
-(void)addNewReply:(id)arg1 ;
-(void)configureCellAccessoryImage:(id)arg1 ;
-(void)setCustomReply:(id)arg1 specifier:(id)arg2 ;
-(id)customReply:(id)arg1 ;
-(void)loadRepliesStoreIfNeeded;
-(id)cannedRepliesFromSpecifiers;
-(unsigned long long)numberOfDefaultReplySpecifiers;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(unsigned long long)category;
@end

