/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <libobjc.A.dylib/TLKGridArrangementItem.h>

@class NUISizeCache, NSString;

@interface TLKImageItem : NSObject <TLKGridArrangementItem> {

	unsigned long long row;
	double horizontalHuggingPriority;
	double horizontalCompressionResistance;
	NUISizeCache* sizeCache;
	NSRange columnRange;
	CGSize _size;
	CGRect frame;

}

@property (assign) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) CGRect frame; 
@property (assign) NSRange columnRange; 
@property (assign) unsigned long long row; 
@property (assign) double horizontalHuggingPriority; 
@property (assign) double horizontalCompressionResistance; 
@property (retain) NUISizeCache * sizeCache; 
-(void)setSizeCache:(NUISizeCache *)arg1 ;
-(double)horizontalCompressionResistance;
-(double)horizontalHuggingPriority;
-(CGSize)sizeForTargetSize:(CGSize)arg1 ;
-(void)setHorizontalHuggingPriority:(double)arg1 ;
-(void)setHorizontalCompressionResistance:(double)arg1 ;
-(NUISizeCache *)sizeCache;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(double)effectiveFirstBaselineOffsetFromContentTop;
-(double)effectiveBaselineOffsetFromContentBottom;
-(NSRange)columnRange;
-(void)setColumnRange:(NSRange)arg1 ;
-(void)setRow:(unsigned long long)arg1 ;
-(CGSize)size;
-(void)setFrame:(CGRect)arg1 ;
-(unsigned long long)row;
-(CGRect)frame;
-(float)contentCompressionResistancePriorityForAxis:(long long)arg1 ;
-(float)contentHuggingPriorityForAxis:(long long)arg1 ;
-(void)setSize:(CGSize)arg1 ;
@end

