/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ODDIteratorAttributes : NSObject {

	int mAxis;
	int mPointType;
	BOOL mHideLastTransition;
	int mStart;
	unsigned mCount;
	int mStep;

}
-(int)step;
-(void)setStep:(int)arg1 ;
-(void)setPointType:(int)arg1 ;
-(void)setHideLastTransition:(BOOL)arg1 ;
-(int)pointType;
-(BOOL)hideLastTransition;
-(unsigned)count;
-(void)setAxis:(int)arg1 ;
-(int)axis;
-(int)start;
-(void)setStart:(int)arg1 ;
-(void)setCount:(unsigned)arg1 ;
@end
