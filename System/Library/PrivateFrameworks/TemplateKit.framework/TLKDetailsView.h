/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/TLKTextAreaViewTesting.h>

@class TLKRichText, TLKMultilineText, TLKImage, NSArray, TLKTextAreaView, NSString;

@interface TLKDetailsView : TLKView <TLKTextAreaViewTesting> {

	BOOL _secondaryTitleIsDetached;
	TLKRichText* _title;
	TLKMultilineText* _secondaryTitle;
	TLKImage* _secondaryTitleImage;
	NSArray* _details;
	TLKRichText* _footnote;
	TLKTextAreaView* _textAreaView;

}

@property (retain) TLKTextAreaView * textAreaView;                           //@synthesize textAreaView=_textAreaView - In the implementation block
@property (nonatomic,retain) TLKRichText * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) TLKMultilineText * secondaryTitle;              //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (assign,nonatomic) BOOL secondaryTitleIsDetached;                  //@synthesize secondaryTitleIsDetached=_secondaryTitleIsDetached - In the implementation block
@property (nonatomic,retain) TLKImage * secondaryTitleImage;                 //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (nonatomic,retain) NSArray * details;                              //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) TLKRichText * footnote;                         //@synthesize footnote=_footnote - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDetails:(NSArray *)arg1 ;
-(NSArray *)details;
-(void)setFootnote:(TLKRichText *)arg1 ;
-(TLKRichText *)footnote;
-(void)setSecondaryTitle:(TLKMultilineText *)arg1 ;
-(TLKMultilineText *)secondaryTitle;
-(void)styleDidChange:(unsigned long long)arg1 ;
-(void)observedPropertiesChanged;
-(void)setTextAreaView:(TLKTextAreaView *)arg1 ;
-(TLKTextAreaView *)textAreaView;
-(BOOL)secondaryTitleIsDetached;
-(id)textAreaLabelStrings;
-(id)footnoteLabelString;
-(id)titleLabelString;
-(id)secondaryTitleLabelString;
-(TLKImage *)secondaryTitleImage;
-(void)setSecondaryTitleImage:(TLKImage *)arg1 ;
-(void)setSecondaryTitleIsDetached:(BOOL)arg1 ;
-(id)init;
-(void)setTitle:(TLKRichText *)arg1 ;
-(TLKRichText *)title;
@end
