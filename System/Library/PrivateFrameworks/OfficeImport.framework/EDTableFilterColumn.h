/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {

	unsigned long long mColumnIndex;
	NSMutableArray* mFilters;
	int mFiltersRelation;

}
-(void)addFilter:(id)arg1 ;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(void)setColumnIndex:(unsigned long long)arg1 ;
-(unsigned long long)columnIndex;
-(unsigned long long)filterCount;
-(int)filtersRelation;
-(void)setFiltersRelation:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end
