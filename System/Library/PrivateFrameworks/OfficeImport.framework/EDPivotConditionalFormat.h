/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {

	unsigned long long mPriority;
	int mType;
	int mScope;
	EDCollection* mPivotAreas;

}
+(id)pivotConditionalFormat;
-(id)pivotAreas;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setPriority:(unsigned long long)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(unsigned long long)priority;
-(void)setScope:(int)arg1 ;
-(int)scope;
@end

