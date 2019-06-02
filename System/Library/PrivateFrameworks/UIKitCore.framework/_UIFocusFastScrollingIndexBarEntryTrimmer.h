/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusFastScrollingIndexBarEntryTrimmerDelegate;
@class NSArray;

@interface _UIFocusFastScrollingIndexBarEntryTrimmer : NSObject {

	NSArray* _allEntries;
	id<_UIFocusFastScrollingIndexBarEntryTrimmerDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * allEntries;                                                                 //@synthesize allEntries=_allEntries - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusFastScrollingIndexBarEntryTrimmerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_UIFocusFastScrollingIndexBarEntryTrimmerDelegate>)arg1 ;
-(id<_UIFocusFastScrollingIndexBarEntryTrimmerDelegate>)delegate;
-(void)setAllEntries:(NSArray *)arg1 ;
-(id)entriesTrimmedToFitCount:(unsigned long long)arg1 ;
-(id)_trimEntries:(id)arg1 toFitCount:(long long)arg2 ;
-(NSArray *)allEntries;
@end

