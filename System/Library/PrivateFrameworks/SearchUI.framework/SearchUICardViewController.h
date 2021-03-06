/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUITableViewController.h>

@class SFCard, UIView, UIActivityIndicatorView, UILabel;

@interface SearchUICardViewController : SearchUITableViewController {

	unsigned long long _level;
	SFCard* _card;
	UIView* _loadingView;
	UIActivityIndicatorView* _loadingSpinner;
	UILabel* _loadingLabel;

}

@property (retain) SFCard * card;                                         //@synthesize card=_card - In the implementation block
@property (retain) UIView * loadingView;                                  //@synthesize loadingView=_loadingView - In the implementation block
@property (retain) UIActivityIndicatorView * loadingSpinner;              //@synthesize loadingSpinner=_loadingSpinner - In the implementation block
@property (retain) UILabel * loadingLabel;                                //@synthesize loadingLabel=_loadingLabel - In the implementation block
@property (assign) unsigned long long level;                              //@synthesize level=_level - In the implementation block
-(void)setLoadingView:(UIView *)arg1 ;
-(UIView *)loadingView;
-(SFCard *)card;
-(id)initWithCard:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3 ;
-(void)setCard:(SFCard *)arg1 ;
-(void)updateWithCardSections:(id)arg1 ;
-(void)displayLoadingView;
-(void)cardViewDidAppear;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(double)offScreenContentScrollDistance;
-(id)testingTableViewController;
-(UILabel *)loadingLabel;
-(void)setLoadingLabel:(UILabel *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(unsigned long long)level;
-(void)setLoadingSpinner:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingSpinner;
@end

