/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSLayoutManagerDelegate <NSObject>
@optional
-(unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const long long*)arg3 characterIndexes:(const unsigned long long*)arg4 font:(id)arg5 forGlyphRange:(NSRange)arg6;
-(double)layoutManager:(id)arg1 lineSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(CGRect)arg3;
-(double)layoutManager:(id)arg1 paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(CGRect)arg3;
-(double)layoutManager:(id)arg1 paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(CGRect)arg3;
-(long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
-(BOOL)layoutManager:(id)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2;
-(BOOL)layoutManager:(id)arg1 shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)arg2;
-(CGRect*)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 glyphPosition:(CGPoint)arg5 characterIndex:(unsigned long long)arg6;
-(BOOL)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout CGRect*)arg2 lineFragmentUsedRect:(inout CGRect*)arg3 baselineOffset:(inout double*)arg4 inTextContainer:(id)arg5 forGlyphRange:(NSRange)arg6;
-(void)layoutManagerDidInvalidateLayout:(id)arg1;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
-(void)layoutManager:(id)arg1 textContainer:(id)arg2 didChangeGeometryFromSize:(CGSize)arg3;

@end

