/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>
#import <libobjc.A.dylib/TTAttachment.h>

@class ICAttachment, NSString;

@interface ICBaseTextAttachment : NSTextAttachment <TTAttachment> {

	ICAttachment* _attachment;

}

@property (nonatomic,retain) ICAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)attachmentAttributesForAttributedString;
-(void)detachView:(id)arg1 fromParentView:(id)arg2 ;
-(BOOL)isEqualToModelComparable:(id)arg1 ;
-(id)attachmentIdentifier;
-(id)attachmentUTI;
-(id)attachmentInContext:(id)arg1 ;
-(BOOL)canDragWithoutSelecting;
-(BOOL)allowsTextAttachmentView;
-(BOOL)usesTextAttachmentView;
-(void)fixAttachmentForAttributedString:(id)arg1 range:(NSRange)arg2 forPlainText:(BOOL)arg3 forStandardizedText:(BOOL)arg4 ;
-(id)printableTextContent;
-(double)viewCornerRadius;
-(id)initWithData:(id)arg1 ofType:(id)arg2 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)initWithAttachment:(id)arg1 ;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICAttachment *)attachment;
@end

