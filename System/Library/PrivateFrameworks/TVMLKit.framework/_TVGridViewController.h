/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVMLCollectionViewController.h>

@interface _TVGridViewController : _TVMLCollectionViewController {

	BOOL _configureForListTemplate;

}
-(void)updateWithViewElement:(id)arg1 cellMetrics:(TVCellMetrics)arg2 ;
-(id)makeCollectionViewWithFrame:(CGRect)arg1 ;
-(BOOL)contentFlowsVertically;
-(void)updateViewLayoutAnimated:(BOOL)arg1 relayout:(BOOL)arg2 ;
-(BOOL)shouldHeaderFloatByDefault;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
@end

