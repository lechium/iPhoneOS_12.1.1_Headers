/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICTextView;

@interface ICSharedScrollClampingController : NSObject {

	long long _scrollClampingTopTextIndex;
	double _scrollClampingTopOffsetFactor;
	long long _scrollClampingStack;
	ICTextView* _textView;
	double _scrollClampingTurnOffDelay;
	double _scrollClampingTopOffsetLineFragmentHeight;

}

@property (assign,nonatomic) double scrollClampingTopOffsetLineFragmentHeight;              //@synthesize scrollClampingTopOffsetLineFragmentHeight=_scrollClampingTopOffsetLineFragmentHeight - In the implementation block
@property (assign) long long scrollClampingTopTextIndex;                                    //@synthesize scrollClampingTopTextIndex=_scrollClampingTopTextIndex - In the implementation block
@property (assign) double scrollClampingTopOffsetFactor;                                    //@synthesize scrollClampingTopOffsetFactor=_scrollClampingTopOffsetFactor - In the implementation block
@property (readonly) long long scrollClampingStack;                                         //@synthesize scrollClampingStack=_scrollClampingStack - In the implementation block
@property (nonatomic,__weak,readonly) ICTextView * textView;                                //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) double scrollClampingTurnOffDelay;                           //@synthesize scrollClampingTurnOffDelay=_scrollClampingTurnOffDelay - In the implementation block
-(void)setScrollClampingTopTextIndex:(long long)arg1 ;
-(void)setScrollClampingTopOffsetFactor:(double)arg1 ;
-(void)setScrollClampingTopOffsetLineFragmentHeight:(double)arg1 ;
-(void)setScrollClampingStack:(long long)arg1 ;
-(void)mergeRelatedOperationsWillBegin:(id)arg1 ;
-(void)mergeRelatedOperationsDidEnd:(id)arg1 ;
-(void)textStorageWillEndEditingNotification:(id)arg1 ;
-(id)initWithTextView:(id)arg1 listensToMergeNotifications:(BOOL)arg2 ;
-(long long)scrollClampingTopTextIndex;
-(double)scrollClampingTopOffsetLineFragmentHeight;
-(double)scrollClampingTopOffsetFactor;
-(void)clamp;
-(void)unclampWithMergeUpdates:(BOOL)arg1 ;
-(long long)scrollClampingStack;
-(void)topTextIndex:(unsigned long long*)arg1 topTextOffset:(double*)arg2 topTextFragmentHeight:(double*)arg3 ;
-(double)scrollClampingTurnOffDelay;
-(id)initWithTextView:(id)arg1 listensToMergeNotifications:(BOOL)arg2 clampingTurnOffDelay:(double)arg3 ;
-(id)clampedYValue;
-(BOOL)isClamped;
-(void)unclamp;
-(void)dealloc;
-(ICTextView *)textView;
@end

