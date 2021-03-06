/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

@interface TLKContentsContainerView : TLKStackView {

	unsigned long long _style;
	NSMutableArray* _contentsViews;

}

@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (retain) NSMutableArray * contentsViews;                  //@synthesize contentsViews=_contentsViews - In the implementation block
-(void)updateWithContents:(id)arg1 ;
-(NSMutableArray *)contentsViews;
-(void)setContentsViews:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
@end

