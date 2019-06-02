/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKMultilineText.h>

@class NSArray;

@interface TLKRichText : TLKMultilineText {

	NSArray* _formattedTextItems;

}

@property (nonatomic,retain) NSArray * formattedTextItems;              //@synthesize formattedTextItems=_formattedTextItems - In the implementation block
@property (readonly) BOOL hasContent; 
-(NSArray *)formattedTextItems;
-(id)filterItemsByType:(unsigned long long)arg1 ;
-(id)stars;
-(id)inlineRoundedText;
-(void)setFormattedTextItems:(NSArray *)arg1 ;
-(id)description;
-(id)text;
-(id)icons;
-(BOOL)hasContent;
@end

