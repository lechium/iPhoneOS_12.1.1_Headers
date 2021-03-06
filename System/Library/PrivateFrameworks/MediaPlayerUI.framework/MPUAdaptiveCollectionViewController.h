/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MPUFoundation/MPUDataSourceViewController.h>

@class NSMutableDictionary;

@interface MPUAdaptiveCollectionViewController : MPUDataSourceViewController {

	UIEdgeInsets _contentInsetAdditions;
	UIEdgeInsets _scrollIndicatorInsetsAdditions;
	NSMutableDictionary* _sizeClassToClassMap;

}

@property (nonatomic,retain) NSMutableDictionary * sizeClassToClassMap;              //@synthesize sizeClassToClassMap=_sizeClassToClassMap - In the implementation block
-(void)dataSourceDidInvalidate;
-(id)_childDataSourceViewController;
-(void)_updateViewControllerIfNecessary;
-(NSMutableDictionary *)sizeClassToClassMap;
-(void)setSizeClassToClassMap:(NSMutableDictionary *)arg1 ;
-(id)_indexPathOfTopVisibleItem;
-(void)_applyNewContentInsetAdditions:(UIEdgeInsets)arg1 withExistingContentInsetAdditions:(UIEdgeInsets)arg2 toScrollView:(id)arg3 ;
-(void)_applyNewScrollIndicatorInsetsAdditions:(UIEdgeInsets)arg1 withExistingScrollIndicatorInsetsAdditions:(UIEdgeInsets)arg2 toScrollView:(id)arg3 ;
-(void)_restoreTopVisibleIndexPath:(id)arg1 ;
-(void)setViewControllerClass:(Class)arg1 forHorizontalSizeClass:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)reloadData;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
@end

