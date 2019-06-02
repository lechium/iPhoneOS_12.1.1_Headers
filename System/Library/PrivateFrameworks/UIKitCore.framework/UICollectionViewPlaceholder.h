/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSIndexPath, NSString;

@interface UICollectionViewPlaceholder : NSObject {

	NSIndexPath* _insertionIndexPath;
	NSString* _cellReuseIdentifier;
	/*^block*/id _cellUpdateHandler;

}

@property (nonatomic,retain) NSIndexPath * insertionIndexPath;              //@synthesize insertionIndexPath=_insertionIndexPath - In the implementation block
@property (nonatomic,copy) NSString * cellReuseIdentifier;                  //@synthesize cellReuseIdentifier=_cellReuseIdentifier - In the implementation block
@property (nonatomic,copy) id cellUpdateHandler;                            //@synthesize cellUpdateHandler=_cellUpdateHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cellUpdateHandler;
-(id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCellUpdateHandler:(id)arg1 ;
-(NSIndexPath *)insertionIndexPath;
-(NSString *)cellReuseIdentifier;
-(void)setInsertionIndexPath:(NSIndexPath *)arg1 ;
-(void)setCellReuseIdentifier:(NSString *)arg1 ;
@end

