/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryFetchControllerViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/VUIMediaEntitiesFetchControllerDelegate.h>

@protocol VUIMediaEntityIdentifier;
@class VUISeasonPickerCollectionViewCell, NSString, _VUISeasonPickerView, NSArray, NSObject, VUILibraryFetchControllerViewController;

@interface VUISeasonPickerViewController : VUILibraryFetchControllerViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, VUIMediaEntitiesFetchControllerDelegate> {

	VUISeasonPickerCollectionViewCell* _sizingCell;
	BOOL _lastViewedSeasonWasManuallyDeleted;
	NSString* _pickerTitle;
	_VUISeasonPickerView* _seasonPickerView;
	NSArray* _seasons;
	NSObject*<VUIMediaEntityIdentifier> _collectionIdentifier;
	VUILibraryFetchControllerViewController* _currentSeasonViewController;

}

@property (nonatomic,retain) _VUISeasonPickerView * seasonPickerView;                                            //@synthesize seasonPickerView=_seasonPickerView - In the implementation block
@property (nonatomic,retain) NSArray * seasons;                                                                  //@synthesize seasons=_seasons - In the implementation block
@property (nonatomic,retain) NSObject*<VUIMediaEntityIdentifier> collectionIdentifier;                           //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,retain) VUILibraryFetchControllerViewController * currentSeasonViewController;              //@synthesize currentSeasonViewController=_currentSeasonViewController - In the implementation block
@property (assign,nonatomic) BOOL lastViewedSeasonWasManuallyDeleted;                                            //@synthesize lastViewedSeasonWasManuallyDeleted=_lastViewedSeasonWasManuallyDeleted - In the implementation block
@property (nonatomic,retain) NSString * pickerTitle;                                                             //@synthesize pickerTitle=_pickerTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCollectionIdentifier:(NSObject*<VUIMediaEntityIdentifier>)arg1 ;
-(NSObject*<VUIMediaEntityIdentifier>)collectionIdentifier;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3 ;
-(NSArray *)seasons;
-(void)setSeasons:(NSArray *)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 title:(id)arg2 collectionIdentifier:(id)arg3 ;
-(VUILibraryFetchControllerViewController *)currentSeasonViewController;
-(void)setLastViewedSeasonWasManuallyDeleted:(BOOL)arg1 ;
-(void)setCurrentSeasonViewController:(VUILibraryFetchControllerViewController *)arg1 ;
-(BOOL)lastViewedSeasonWasManuallyDeleted;
-(NSString *)pickerTitle;
-(void)setPickerTitle:(NSString *)arg1 ;
-(_VUISeasonPickerView *)seasonPickerView;
-(void)setSeasonPickerView:(_VUISeasonPickerView *)arg1 ;
@end

