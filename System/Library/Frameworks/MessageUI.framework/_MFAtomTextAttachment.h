/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class MFModernComposeRecipientAtom, MFComposeRecipient;

@interface _MFAtomTextAttachment : NSTextAttachment {

	BOOL _isPlaceholder;
	MFModernComposeRecipientAtom* _atomView;

}

@property (assign,nonatomic) BOOL isPlaceholder;                                   //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,retain) MFModernComposeRecipientAtom * atomView;              //@synthesize atomView=_atomView - In the implementation block
@property (nonatomic,readonly) MFComposeRecipient * recipient; 
-(MFComposeRecipient *)recipient;
-(id)initWithAtomView:(id)arg1 ;
-(id)attributedStringWithBaseAttributes:(id)arg1 ;
-(void)setAtomView:(MFModernComposeRecipientAtom *)arg1 ;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isPlaceholder;
-(MFModernComposeRecipientAtom *)atomView;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
@end

