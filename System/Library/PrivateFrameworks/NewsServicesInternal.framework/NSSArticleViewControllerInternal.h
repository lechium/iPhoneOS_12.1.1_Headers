/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSSArticleInternal, NSSArticleView, UIActivityIndicatorView;

@interface NSSArticleViewControllerInternal : UIViewController {

	BOOL _articleLoading;
	NSSArticleInternal* _article;
	NSSArticleView* _articleView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) NSSArticleView * articleView;                   //@synthesize articleView=_articleView - In the implementation block
@property (assign,nonatomic) BOOL articleLoading;                            //@synthesize articleLoading=_articleLoading - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSSArticleInternal * article;                   //@synthesize article=_article - In the implementation block
-(NSSArticleInternal *)article;
-(void)setArticle:(NSSArticleInternal *)arg1 ;
-(void)setArticleLoading:(BOOL)arg1 ;
-(void)setArticleView:(NSSArticleView *)arg1 ;
-(NSSArticleView *)articleView;
-(void)_tickleSpinner;
-(void)_tickleArticleView;
-(BOOL)articleLoading;
-(id)initWithSpotlightIdentifier:(id)arg1 ;
-(void)presentArticle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithArticle:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)prefersStatusBarHidden;
-(UIActivityIndicatorView *)spinner;
-(id)initWithNotification:(id)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end
