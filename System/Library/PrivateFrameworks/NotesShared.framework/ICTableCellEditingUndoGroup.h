/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/TTMergeableStringUndoGroup.h>

@class NSUUID, ICTableAttachmentSelection, ICTableUndoTarget;

@interface ICTableCellEditingUndoGroup : TTMergeableStringUndoGroup {

	NSUUID* _columnID;
	NSUUID* _rowID;
	ICTableAttachmentSelection* _tableSelection;
	ICTableUndoTarget* _undoTarget;

}

@property (nonatomic,readonly) NSUUID * columnID;                                        //@synthesize columnID=_columnID - In the implementation block
@property (nonatomic,readonly) NSUUID * rowID;                                           //@synthesize rowID=_rowID - In the implementation block
@property (nonatomic,readonly) ICTableAttachmentSelection * tableSelection;              //@synthesize tableSelection=_tableSelection - In the implementation block
@property (nonatomic,readonly) ICTableUndoTarget * undoTarget;                           //@synthesize undoTarget=_undoTarget - In the implementation block
-(NSUUID *)rowID;
-(ICTableUndoTarget *)undoTarget;
-(NSUUID *)columnID;
-(ICTableAttachmentSelection *)tableSelection;
-(id)initWithColumn:(id)arg1 row:(id)arg2 selection:(id)arg3 undoTarget:(id)arg4 ;
-(id)init;
@end

