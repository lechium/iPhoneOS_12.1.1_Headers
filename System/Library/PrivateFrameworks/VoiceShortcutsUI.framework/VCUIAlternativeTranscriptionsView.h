/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutsUI/VoiceShortcutsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol VCUIAlternativeTranscriptionsViewDelegate;
@class NSArray, UITableView, NSIndexPath, NSString;

@interface VCUIAlternativeTranscriptionsView : UIView <UITableViewDataSource, UITableViewDelegate> {

	id<VCUIAlternativeTranscriptionsViewDelegate> _delegate;
	NSArray* _alternativeTranscriptions;
	UITableView* _tableView;
	NSIndexPath* _selectedIndexPath;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                            //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (assign,nonatomic,__weak) id<VCUIAlternativeTranscriptionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * alternativeTranscriptions;                                 //@synthesize alternativeTranscriptions=_alternativeTranscriptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSIndexPath *)selectedIndexPath;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(void)setDelegate:(id<VCUIAlternativeTranscriptionsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<VCUIAlternativeTranscriptionsViewDelegate>)delegate;
-(UITableView *)tableView;
-(CGSize)intrinsicContentSize;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(NSArray *)alternativeTranscriptions;
-(id)initWithAlternativeTranscriptions:(id)arg1 ;
@end

