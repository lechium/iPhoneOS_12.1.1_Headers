/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>
#import <libobjc.A.dylib/SXTextSourceDataSource.h>

@class SXTextResizer, SXTextLayouter, NSString;

@interface SXTextComponentSizer : SXComponentSizer <SXTextSourceDataSource> {

	SXTextResizer* _textResizer;
	SXTextLayouter* _textLayouter;

}

@property (nonatomic,retain) SXTextResizer * textResizer;                    //@synthesize textResizer=_textResizer - In the implementation block
@property (nonatomic,retain) SXTextLayouter * textLayouter;                  //@synthesize textLayouter=_textLayouter - In the implementation block
@property (nonatomic,readonly) unsigned long long stringLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2 ;
-(id)snapLines;
-(id)textStyleForTextSource:(id)arg1 ;
-(id)documentControllerForTextSource:(id)arg1 ;
-(id)textResizerForTextSource:(id)arg1 ;
-(id)textRulesForTextSource:(id)arg1 ;
-(id)contentSizeCategoryForTextSource:(id)arg1 ;
-(id)additionsForTextSource:(id)arg1 ;
-(id)inlineTextStylesForTextSource:(id)arg1 ;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 documentController:(id)arg4 layoutAttributes:(id)arg5 textComponentLayoutHosting:(id)arg6 smartFieldFactory:(id)arg7 ;
-(void)setTextLayouter:(SXTextLayouter *)arg1 ;
-(double)verticalPositionForRange:(NSRange)arg1 ;
-(void)removeAllExclusionPaths;
-(unsigned long long)stringLength;
-(id)existingExclusionPathForComponentWithIdentifier:(id)arg1 ;
-(void)addExclusionPath:(id)arg1 ;
-(SXTextLayouter *)textLayouter;
-(SXTextResizer *)textResizer;
-(void)setTextResizer:(SXTextResizer *)arg1 ;
@end

