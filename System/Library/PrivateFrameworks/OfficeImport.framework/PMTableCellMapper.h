/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTableCell, CMStyle;

@interface PMTableCellMapper : CMMapper {

	OADTableCell* mCell;
	CMStyle* mStyle;
	int mColIndex;
	unsigned long long mRowIndex;
	float mWidth;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)tableMapper;
-(void)mapBordersWithState:(id)arg1 ;
-(void)mapCellPropertiesWithState:(id)arg1 textAnchor:(unsigned char)arg2 ;
-(id)initWithOadTableCell:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(int)arg3 parent:(id)arg4 ;
-(float)widthWithState:(id)arg1 ;
-(id)rowMapper;
@end

