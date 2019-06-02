/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSIndexPath;

@interface _UIFocusFastScrollingIndexBarEntry : NSObject {

	BOOL _isPlaceholder;
	BOOL _hasCachedContentOffset;
	CGPoint _cachedContentOffset;
	/*^block*/id _contentOffsetGenerator;
	NSString* _title;
	NSIndexPath* _targetFocusedIndexPath;

}

@property (nonatomic,copy,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) CGPoint contentOffset; 
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
@property (nonatomic,copy) NSIndexPath * targetFocusedIndexPath;                   //@synthesize targetFocusedIndexPath=_targetFocusedIndexPath - In the implementation block
+(id)entryWithTitle:(id)arg1 generator:(/*^block*/id)arg2 ;
+(id)placeholderEntryWithEntryBefore:(id)arg1 after:(id)arg2 ;
+(id)entryWithTitle:(id)arg1 contentOffset:(CGPoint)arg2 ;
-(id)description;
-(NSString *)title;
-(CGPoint)contentOffset;
-(void)setTargetFocusedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)targetFocusedIndexPath;
-(BOOL)isPlaceholder;
-(id)initWithTitle:(id)arg1 contentOffset:(CGPoint)arg2 ;
-(id)initWithTitle:(id)arg1 generator:(/*^block*/id)arg2 ;
@end
