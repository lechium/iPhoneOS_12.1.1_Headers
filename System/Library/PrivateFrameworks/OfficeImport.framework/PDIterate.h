/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PDIterate : NSObject {

	int mType;
	BOOL mIsBackwards;
	BOOL mIsPercentage;
	double mValue;

}
-(BOOL)isBackwards;
-(BOOL)isValuePercentage;
-(void)setIsBackwards:(BOOL)arg1 ;
-(void)setIsValuePercentage:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(void)setType:(int)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
@end

