/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextRange.h>

@class DOMRange;

@interface UITextRangeImpl : UITextRange {

	DOMRange* _domRange;
	long long _affinityIfCollapsed;

}

@property (nonatomic,retain) DOMRange * domRange;              //@synthesize domRange=_domRange - In the implementation block
@property (assign,nonatomic) long long affinity;               //@synthesize affinityIfCollapsed=_affinityIfCollapsed - In the implementation block
+(id)wrapDOMRange:(id)arg1 withAffinity:(long long)arg2 ;
+(id)wrapDOMRange:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)start;
-(BOOL)isEmpty;
-(id)end;
-(void)setDomRange:(DOMRange *)arg1 ;
-(void)setAffinity:(long long)arg1 ;
-(long long)affinity;
-(DOMRange *)domRange;
-(void)adjustAffinityOfPosition:(id)arg1 isStart:(BOOL)arg2 ;
@end

