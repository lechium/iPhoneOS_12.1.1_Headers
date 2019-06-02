/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController {

	SUButtonAccessoryView* _accessoryView;

}
-(void)reloadForChangedRowCount:(long long)arg1 ;
-(id)newTermsAndConditionsFooter;
-(id)_headerItem;
-(void)_writeAReview:(id)arg1 ;
-(BOOL)_canWriteReview;
-(void)_reloadHeaderView;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)reloadData;
-(id)_accessoryView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
@end
