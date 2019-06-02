/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@protocol NTKCFaceDetailEditOptionSectionDelegate;
@class NTKEditOptionCollection, NTKFaceView, NSDictionary, NTKCFaceDetailRowActionCell;

@interface NTKCFaceDetailEditOptionSectionController : NTKCFaceDetailSectionController {

	NTKEditOptionCollection* _collection;
	NTKFaceView* _faceView;
	NSDictionary* _selectedOptions;
	id<NTKCFaceDetailEditOptionSectionDelegate> _delegate;
	Class _editCellClass;
	NTKCFaceDetailRowActionCell* _actionRow;

}

@property (nonatomic,retain) NTKEditOptionCollection * collection;                                     //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic,__weak) NTKFaceView * faceView;                                            //@synthesize faceView=_faceView - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailRowActionCell * actionRow;                                  //@synthesize actionRow=_actionRow - In the implementation block
@property (nonatomic,retain) NSDictionary * selectedOptions;                                           //@synthesize selectedOptions=_selectedOptions - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailEditOptionSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) Class editCellClass;                                                    //@synthesize editCellClass=_editCellClass - In the implementation block
-(NTKEditOptionCollection *)collection;
-(void)setCollection:(NTKEditOptionCollection *)arg1 ;
-(NTKFaceView *)faceView;
-(void)setFaceView:(NTKFaceView *)arg1 ;
-(void)setSelectedOptions:(NSDictionary *)arg1 ;
-(BOOL)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2 ;
-(NSDictionary *)selectedOptions;
-(void)faceDidChange;
-(BOOL)_canSelectRow:(long long)arg1 ;
-(id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5 ;
-(void)setActionRow:(NTKCFaceDetailRowActionCell *)arg1 ;
-(void)_refreshActionRowContent;
-(id)_actionNameForOption:(id)arg1 ;
-(void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2 ;
-(id)_initWithTableView:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5 ;
-(BOOL)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2 ;
-(BOOL)_handleDidSelectOption:(id)arg1 ;
-(BOOL)_handleDidSelectActionRowForOption:(id)arg1 ;
-(void)reloadActionRow;
-(void)_dequeueActionRow;
-(Class)editCellClass;
-(NTKCFaceDetailRowActionCell *)actionRow;
-(void)setDelegate:(id<NTKCFaceDetailEditOptionSectionDelegate>)arg1 ;
-(id<NTKCFaceDetailEditOptionSectionDelegate>)delegate;
@end

