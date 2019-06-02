/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>

@class NSArray, NSDictionary, UIScrollView, UILabel, UICollectionView, NSLayoutConstraint, NSString;

@interface PKRecognitionDataCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {

	NSArray* _drawings;
	NSArray* _drawingImages;
	NSDictionary* _metadata;
	UIScrollView* _scrollView;
	UILabel* _descriptionLabel;
	UICollectionView* _collectionView;
	NSLayoutConstraint* _collectionViewHeightConstraint;

}

@property (nonatomic,retain) NSArray * drawings;                                               //@synthesize drawings=_drawings - In the implementation block
@property (nonatomic,retain) NSArray * drawingImages;                                          //@synthesize drawingImages=_drawingImages - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * collectionViewHeightConstraint;              //@synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMetadata:(NSDictionary *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(id)initWithDrawings:(id)arg1 metadata:(id)arg2 ;
-(void)sendRadarButtonTapped:(id)arg1 ;
-(void)setCollectionViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)collectionViewHeightConstraint;
-(NSArray *)drawings;
-(id)synchronousImageForDrawing:(id)arg1 ;
-(void)setDrawingImages:(NSArray *)arg1 ;
-(void)adjustCollectionViewHeight;
-(void)openAppleFeedbackAssistantWithTempDirectoryURL:(id)arg1 ;
-(void)openTapToRadarWithTempDirectoryURL:(id)arg1 ;
-(id)saveDataForDrawings:(id)arg1 baseURL:(id)arg2 shouldSaveRecognitionData:(BOOL)arg3 ;
-(NSArray *)drawingImages;
-(void)setDrawings:(NSArray *)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(NSDictionary *)metadata;
-(void)openURL:(id)arg1 ;
@end

