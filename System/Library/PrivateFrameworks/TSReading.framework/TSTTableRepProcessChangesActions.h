/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSTTableRepProcessChangesActions : NSObject {

	BOOL _invalidateAllChrome;
	BOOL _invalidateColumnChrome;
	BOOL _invalidateRowChrome;
	BOOL _hideChromeContextMenuButton;
	BOOL _invalidateKnobs;
	BOOL _invalidateSelection;
	BOOL _invalidateTableName;
	BOOL _updateEditorRemainders;
	BOOL _syncReferenceHighlightState;
	BOOL _setNeedsDisplay;
	BOOL _hideStepperHUD;
	SCD_Struct_TS140 dirtyCellRange;
	SCD_Struct_TS140 dirtyStrokeRange;

}

@property (assign,nonatomic) SCD_Struct_TS141 dirtyCellRange; 
@property (assign,nonatomic) SCD_Struct_TS141 dirtyStrokeRange; 
@property (assign,nonatomic) BOOL invalidateAllChrome;                       //@synthesize invalidateAllChrome=_invalidateAllChrome - In the implementation block
@property (assign,nonatomic) BOOL invalidateColumnChrome;                    //@synthesize invalidateColumnChrome=_invalidateColumnChrome - In the implementation block
@property (assign,nonatomic) BOOL invalidateRowChrome;                       //@synthesize invalidateRowChrome=_invalidateRowChrome - In the implementation block
@property (assign,nonatomic) BOOL hideChromeContextMenuButton;               //@synthesize hideChromeContextMenuButton=_hideChromeContextMenuButton - In the implementation block
@property (assign,nonatomic) BOOL invalidateKnobs;                           //@synthesize invalidateKnobs=_invalidateKnobs - In the implementation block
@property (assign,nonatomic) BOOL invalidateSelection;                       //@synthesize invalidateSelection=_invalidateSelection - In the implementation block
@property (assign,nonatomic) BOOL invalidateTableName;                       //@synthesize invalidateTableName=_invalidateTableName - In the implementation block
@property (assign,nonatomic) BOOL updateEditorRemainders;                    //@synthesize updateEditorRemainders=_updateEditorRemainders - In the implementation block
@property (assign,nonatomic) BOOL syncReferenceHighlightState;               //@synthesize syncReferenceHighlightState=_syncReferenceHighlightState - In the implementation block
@property (assign,nonatomic) BOOL setNeedsDisplay;                           //@synthesize setNeedsDisplay=_setNeedsDisplay - In the implementation block
@property (assign,nonatomic) BOOL hideStepperHUD;                            //@synthesize hideStepperHUD=_hideStepperHUD - In the implementation block
-(BOOL)invalidateSelection;
-(BOOL)invalidateKnobs;
-(void)setDirtyCellRange:(SCD_Struct_TS141)arg1 ;
-(void)setDirtyStrokeRange:(SCD_Struct_TS141)arg1 ;
-(SCD_Struct_TS141)dirtyCellRange;
-(SCD_Struct_TS141)dirtyStrokeRange;
-(BOOL)invalidateAllChrome;
-(void)setInvalidateAllChrome:(BOOL)arg1 ;
-(BOOL)invalidateColumnChrome;
-(void)setInvalidateColumnChrome:(BOOL)arg1 ;
-(BOOL)invalidateRowChrome;
-(void)setInvalidateRowChrome:(BOOL)arg1 ;
-(BOOL)hideChromeContextMenuButton;
-(void)setHideChromeContextMenuButton:(BOOL)arg1 ;
-(void)setInvalidateKnobs:(BOOL)arg1 ;
-(void)setInvalidateSelection:(BOOL)arg1 ;
-(BOOL)invalidateTableName;
-(void)setInvalidateTableName:(BOOL)arg1 ;
-(BOOL)updateEditorRemainders;
-(void)setUpdateEditorRemainders:(BOOL)arg1 ;
-(BOOL)syncReferenceHighlightState;
-(void)setSyncReferenceHighlightState:(BOOL)arg1 ;
-(void)setSetNeedsDisplay:(BOOL)arg1 ;
-(BOOL)hideStepperHUD;
-(void)setHideStepperHUD:(BOOL)arg1 ;
-(BOOL)setNeedsDisplay;
@end

