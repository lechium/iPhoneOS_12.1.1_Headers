/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexPath, NSString;

@interface UITableViewPlaceholder : NSObject {

	/*^block*/id _cellUpdateHandler;
	NSIndexPath* _insertionIndexPath;
	NSString* _reuseIdentifier;
	double _rowHeight;

}

@property (nonatomic,retain) NSIndexPath * insertionIndexPath;              //@synthesize insertionIndexPath=_insertionIndexPath - In the implementation block
@property (nonatomic,retain) NSString * reuseIdentifier;                    //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,nonatomic) double rowHeight;                              //@synthesize rowHeight=_rowHeight - In the implementation block
@property (nonatomic,copy) id cellUpdateHandler;                            //@synthesize cellUpdateHandler=_cellUpdateHandler - In the implementation block
-(double)rowHeight;
-(NSString *)reuseIdentifier;
-(void)setRowHeight:(double)arg1 ;
-(id)cellUpdateHandler;
-(void)setCellUpdateHandler:(id)arg1 ;
-(NSIndexPath *)insertionIndexPath;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(void)setInsertionIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 rowHeight:(double)arg3 ;
@end

