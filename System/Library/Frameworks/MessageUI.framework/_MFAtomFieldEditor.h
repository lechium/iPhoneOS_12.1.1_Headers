/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UITextView.h>

@interface _MFAtomFieldEditor : UITextView
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)textInputTraits;
-(id)_textInputTraits;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)undoManager;
-(void)_lookup:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)_hostView;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(CGRect)convertGlyphRect:(CGRect)arg1 ;
-(CGRect)_rectForScrollToVisible:(NSRange)arg1 ;
-(id)_enclosingScrollView;
@end
