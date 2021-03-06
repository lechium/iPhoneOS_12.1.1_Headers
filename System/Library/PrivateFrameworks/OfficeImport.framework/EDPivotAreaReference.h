/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDPivotAreaReference : NSObject {

	BOOL mByPosition;
	BOOL mRelative;
	BOOL mSelected;
	unsigned long long mFieldId;
	unsigned long long mCount;

}
+(id)pivotAreaReference;
-(BOOL)relative;
-(void)setRelative:(BOOL)arg1 ;
-(unsigned long long)fieldId;
-(void)setFieldId:(unsigned long long)arg1 ;
-(BOOL)byPosition;
-(void)setByPosition:(BOOL)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setCount:(unsigned long long)arg1 ;
@end

