/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDResources, EDString;

@interface EDTableColumn : NSObject {

	EDResources* mResources;
	unsigned long long mHeaderRowDxfIndex;
	unsigned long long mTotalsRowDxfIndex;
	unsigned long long mDataAreaDxfIndex;
	EDString* mName;
	EDString* mUniqueName;
	EDString* mTotalsRowLabel;

}
+(id)tableColumnWithResources:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(id)headerRowDxf;
-(void)setHeaderRowDxf:(id)arg1 ;
-(id)totalsRowDxf;
-(void)setTotalsRowDxf:(id)arg1 ;
-(id)dataAreaDxf;
-(void)setDataAreaDxf:(id)arg1 ;
-(unsigned long long)headerRowDxfIndex;
-(void)setHeaderRowDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalsRowDxfIndex;
-(void)setTotalsRowDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)dataAreaDxfIndex;
-(void)setDataAreaDxfIndex:(unsigned long long)arg1 ;
-(id)totalsRowLabel;
-(void)setUniqueName:(id)arg1 ;
-(void)setTotalsRowLabel:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(void)setName:(id)arg1 ;
-(id)description;
-(id)uniqueName;
@end

