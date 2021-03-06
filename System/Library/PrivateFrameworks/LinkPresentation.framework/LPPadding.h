/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/LPCSSText.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPPointUnit;

@interface LPPadding : NSObject <LPCSSText, NSCopying> {

	LPPointUnit* _top;
	LPPointUnit* _leading;
	LPPointUnit* _bottom;
	LPPointUnit* _trailing;

}

@property (nonatomic,retain) LPPointUnit * top;                   //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) LPPointUnit * leading;               //@synthesize leading=_leading - In the implementation block
@property (nonatomic,retain) LPPointUnit * bottom;                //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) LPPointUnit * trailing;              //@synthesize trailing=_trailing - In the implementation block
-(id)_lp_CSSText;
-(LPPointUnit *)trailing;
-(UIEdgeInsets)asInsetsForView:(id)arg1 ;
-(void)setTrailing:(LPPointUnit *)arg1 ;
-(void)setLeading:(LPPointUnit *)arg1 ;
-(LPPointUnit *)top;
-(LPPointUnit *)bottom;
-(void)setTop:(LPPointUnit *)arg1 ;
-(void)setBottom:(LPPointUnit *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPPointUnit *)leading;
@end

