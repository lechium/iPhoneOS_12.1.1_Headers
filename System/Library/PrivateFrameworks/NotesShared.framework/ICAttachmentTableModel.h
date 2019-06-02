/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICAttachmentModel.h>

@class ICTableVersionedDocument, ICTable;

@interface ICAttachmentTableModel : ICAttachmentModel {

	ICTableVersionedDocument* _tableDocument;

}

@property (nonatomic,retain) ICTableVersionedDocument * tableDocument;              //@synthesize tableDocument=_tableDocument - In the implementation block
@property (nonatomic,readonly) ICTable * table; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(id)searchableTextContentInNote;
-(void)attachmentWillTurnIntoFault;
-(void)attachmentWillRefresh:(BOOL)arg1 ;
-(void)attachmentDidRefresh:(BOOL)arg1 ;
-(void)writeMergeableData;
-(BOOL)providesTextContentInNote;
-(id)textContentInNote;
-(void)noteWillAddOrRemovePassword;
-(void)regenerateTextContentInNote;
-(void)attachmentAwakeFromFetch;
-(void)willMarkAttachmentForDeletion;
-(BOOL)isReadyToPresent;
-(id)localizedFallbackTitle;
-(id)localizedFallbackSubtitleIOS;
-(id)localizedFallbackSubtitleMac;
-(void)mergeTablePrimitiveData;
-(ICTableVersionedDocument *)tableDocument;
-(void)updateAttachmentByMergingWithTableDoc:(id)arg1 ;
-(void)setTableDocument:(ICTableVersionedDocument *)arg1 ;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(ICTable *)table;
@end

