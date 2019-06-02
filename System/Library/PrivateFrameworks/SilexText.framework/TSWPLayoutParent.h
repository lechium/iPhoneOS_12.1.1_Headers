/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPLayoutParent
@optional
-(id)styleProviderForLayout:(id)arg1;
-(id)styleProviderForStorage:(id)arg1;
-(double)maxAutoGrowWidthForTextLayout:(id)arg1;
-(double)maxAutoGrowHeightForTextLayout:(id)arg1;
-(unsigned long long)initialCharIndex;
-(BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
-(BOOL)textLayoutShouldLayoutVertically:(id)arg1;
-(BOOL)allowsLastLineTruncation:(id)arg1;
-(unsigned)maxLineCountForTextLayout:(id)arg1;
-(unsigned)textLayoutShouldIgnoreEquationAlignment:(id)arg1;
-(CGRect*)maskRectForTextLayout:(id)arg1;
-(unsigned)naturalAlignmentForTextLayout:(id)arg1;
-(CGSize*)initialTextSize;
-(unsigned long long)pageCountForAttachment:(id)arg1;
-(unsigned long long)pageNumberForAttachment:(id)arg1;
-(BOOL)shouldHyphenateTextLayout:(id)arg1;

@required
-(unsigned)autosizeFlagsForTextLayout:(id)arg1;
-(unsigned)verticalAlignmentForTextLayout:(id)arg1;
-(void)invalidateForAutosizingTextLayout:(id)arg1;
-(CGRect*)nonAutosizedFrameForTextLayout:(id)arg1;
-(CGRect*)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2;
-(id)dependentsOfTextLayout:(id)arg1;
-(Class)repClassForTextLayout:(id)arg1;

@end
