/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUIViewElementLayoutContext, SKUIInfoListViewElement, NSNumber, NSArray, NSString;

@interface SKUIKeyValueInfoListPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {

	SKUIViewElementLayoutContext* _cellLayoutContext;
	SKUIInfoListViewElement* _infoList;
	NSNumber* _titleColumnWidth;
	NSArray* _viewElements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)sectionContentInset;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)_reloadViewElementProperties;
-(long long)applyUpdateType:(long long)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_requestCellLayout;
-(void)_enumerateVisibleViewElementsUsingBlock:(/*^block*/id)arg1 ;
-(long long)numberOfCells;
@end

