/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface OADTableRow : NSObject {

	NSMutableArray* mCells;
	float mHeight;

}
-(unsigned long long)cellCount;
-(id)cellAtIndex:(unsigned long long)arg1 ;
-(id)addCell;
-(void)flipCellsRTL;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setHeight:(float)arg1 ;
-(float)height;
@end
