/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtrasTemplateViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, UIImageView, NSArray, NSMapTable, NSIndexPath, VideosExtrasViewElementViewController, NSString;

@interface VideosExtrasListTemplateViewController : VideosExtrasTemplateViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	BOOL _tableViewLeft;
	UIImageView* _vignetteView;
	BOOL _relatedContentEmbedded;
	NSArray* _masterViewConstraints;
	NSArray* _detailViewConstraints;
	NSMapTable* _relatedContentViewControllerMap;
	NSIndexPath* _autohighlightIndexPath;
	VideosExtrasViewElementViewController* _relatedContentViewController;

}

@property (nonatomic,retain) VideosExtrasViewElementViewController * relatedContentViewController;              //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)relatedContentViewControllerForElement:(id)arg1 ;
-(BOOL)showsPlaceholder;
-(id)templateElement;
-(void)setRelatedContentViewController:(VideosExtrasViewElementViewController *)arg1 ;
-(VideosExtrasViewElementViewController *)relatedContentViewController;
-(void)_configureBannerWithElement:(id)arg1 ;
-(void)_prepareLayout;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)_updateForTemplate:(id)arg1 ;
-(void)_updateRelatedContent:(id)arg1 forListItem:(id)arg2 ;
-(void)_embedRelatedContentViewController;
-(void)_unembedRelatedContent;
-(void)_pushRelatedViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setDetailContraints;
-(void)_setRelatedContentEmbedded:(BOOL)arg1 ;
-(void)_addConstraintsToTableView:(id)arg1 ;
-(void)_configureVignette:(BOOL)arg1 ;
-(BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1 ;
-(void)_setNavigationConstraints;
-(void)dealloc;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

