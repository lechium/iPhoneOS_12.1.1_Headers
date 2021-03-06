/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKObject.h>

@class TLKMultilineText, NSArray;

@interface TLKDetailsSection : TLKObject {

	TLKMultilineText* _title;
	NSArray* _details;

}

@property (nonatomic,retain) TLKMultilineText * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * details;                     //@synthesize details=_details - In the implementation block
-(void)setDetails:(NSArray *)arg1 ;
-(NSArray *)details;
-(void)setTitle:(TLKMultilineText *)arg1 ;
-(TLKMultilineText *)title;
@end

