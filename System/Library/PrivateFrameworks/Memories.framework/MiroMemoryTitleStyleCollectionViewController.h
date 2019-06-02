/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol OS_dispatch_queue, MiroMemoryEditorPlayerViewDelegate;
@class NSObject, MiroMemory, MiroMemoryEditorPosterController, NSString, NSIndexPath;

@interface MiroMemoryTitleStyleCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {

	NSObject*<OS_dispatch_queue> _serialTaskQueue;
	BOOL _shouldNoteUserChangedTitleStyle;
	MiroMemory* _memory;
	MiroMemoryEditorPosterController* _posterController;
	id<MiroMemoryEditorPlayerViewDelegate> _playerViewDelegate;
	NSString* _initialTitleStyleID;
	NSIndexPath* _previouslySelectedIndexPath;
	long long _numberOfColumnsUsed;
	CGSize _layoutSize;
	CGSize _itemSize;

}

@property (nonatomic,retain) NSString * initialTitleStyleID;                                                //@synthesize initialTitleStyleID=_initialTitleStyleID - In the implementation block
@property (assign,nonatomic) BOOL shouldNoteUserChangedTitleStyle;                                          //@synthesize shouldNoteUserChangedTitleStyle=_shouldNoteUserChangedTitleStyle - In the implementation block
@property (nonatomic,retain) NSIndexPath * previouslySelectedIndexPath;                                     //@synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath - In the implementation block
@property (assign,nonatomic) long long numberOfColumnsUsed;                                                 //@synthesize numberOfColumnsUsed=_numberOfColumnsUsed - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                                               //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,retain) MiroMemory * memory;                                                           //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) MiroMemoryEditorPosterController * posterController;                           //@synthesize posterController=_posterController - In the implementation block
@property (assign,nonatomic,__weak) id<MiroMemoryEditorPlayerViewDelegate> playerViewDelegate;              //@synthesize playerViewDelegate=_playerViewDelegate - In the implementation block
@property (assign,nonatomic) CGSize layoutSize;                                                             //@synthesize layoutSize=_layoutSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(void)setPreviouslySelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)previouslySelectedIndexPath;
-(id<MiroMemoryEditorPlayerViewDelegate>)playerViewDelegate;
-(void)removeObservers;
-(void)_refreshAllPosters;
-(id)_selectedIndexPathForBlueprint:(id)arg1 ;
-(void)setInitialTitleStyleID:(NSString *)arg1 ;
-(void)addObservers;
-(void)_didEndTitleStyleEditing;
-(void)setNumberOfColumnsUsed:(long long)arg1 ;
-(CGSize)sizeForItemForViewWidth:(double)arg1 layout:(id)arg2 ;
-(MiroMemoryEditorPosterController *)posterController;
-(long long)numberOfColumnsUsed;
-(void)setShouldNoteUserChangedTitleStyle:(BOOL)arg1 ;
-(BOOL)shouldNoteUserChangedTitleStyle;
-(NSString *)initialTitleStyleID;
-(double)contentHeightForWidth:(double)arg1 ;
-(void)setLayoutSize:(CGSize)arg1 ;
-(void)setPosterController:(MiroMemoryEditorPosterController *)arg1 ;
-(void)setPlayerViewDelegate:(id<MiroMemoryEditorPlayerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)itemSize;
-(void)setItemSize:(CGSize)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)layoutSize;
@end
