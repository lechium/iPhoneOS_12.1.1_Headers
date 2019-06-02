/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SUVariableCellConfigurationCache, SUImageCache, ISURLOperationPool, NSArray;

@interface SUTableDataSource : NSObject {

	id _cellReuseSource;
	long long _columnCount;
	SUVariableCellConfigurationCache* _configurationCache;
	long long _preferringUserInteractionCount;

}

@property (assign,nonatomic) id cellReuseSource;                                                               //@synthesize cellReuseSource=_cellReuseSource - In the implementation block
@property (nonatomic,readonly) SUImageCache * imageCache; 
@property (nonatomic,readonly) ISURLOperationPool * imagePool; 
@property (nonatomic,readonly) long long tableViewStyle; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (assign,nonatomic) long long columnCount;                                                            //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
@property (getter=isPreferringUserInteraction,nonatomic,readonly) BOOL preferringUserInteraction; 
-(id)titleForHeaderInSection:(long long)arg1 ;
-(SUImageCache *)imageCache;
-(void)setCellReuseSource:(id)arg1 ;
-(BOOL)deleteIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)resetLayoutCaches;
-(void)endPreferringUserInteraction;
-(void)beginPreferringUserInteraction;
-(id)placeholderCellForIndexPath:(id)arg1 ;
-(long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2 ;
-(void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)canDoubleTapIndexPath:(id)arg1 ;
-(BOOL)canDeleteIndexPath:(id)arg1 ;
-(double)heightForFooterInSection:(long long)arg1 ;
-(double)heightForPlaceholderCells;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(id)titleForDeleteConfirmationForIndexPath:(id)arg1 ;
-(BOOL)canSelectIndexPath:(id)arg1 ;
-(void)didBeginPreferringUserInteraction;
-(ISURLOperationPool *)imagePool;
-(void)didEndPreferringUserInteraction;
-(void)reloadCellContexts;
-(id)cachedConfigurationForClass:(Class)arg1 index:(long long)arg2 ;
-(id)cellContextForConfigurationClass:(Class)arg1 ;
-(BOOL)isPreferringUserInteraction;
-(long long)numberOfColumnsInSection:(long long)arg1 ;
-(id)cellReuseSource;
-(id)cellForIndexPath:(id)arg1 ;
-(void)resetCaches;
-(long long)columnCount;
-(void)setColumnCount:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reloadData;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(long long)tableViewStyle;
-(NSArray *)sectionIndexTitles;
-(id)headerViewForSection:(long long)arg1 ;
@end

