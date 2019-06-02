/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class UIFont;

@interface SearchUIImageAttachment : NSTextAttachment {

	UIFont* _font;

}

@property (retain) UIFont * font;              //@synthesize font=_font - In the implementation block
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
@end

