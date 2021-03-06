/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/EQKitLayoutElementaryStackRow.h>

@class NSString;

@interface EQKitLayoutElementaryStackLineRow : NSObject <EQKitLayoutElementaryStackRow> {

	unsigned long long mLength;
	double mThickness;
	long long mAlignmentShift;
	unsigned long long mFirstColumnIndex;
	double mFollowingSpace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long alignmentShift; 
@property (assign,nonatomic) unsigned long long firstColumnIndex; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL spansStack; 
@property (nonatomic,readonly) double followingSpace; 
-(long long)alignmentShift;
-(void)setFirstColumnIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstColumnIndex;
-(void)populateMaxColumnWidths:(_wrap_iter<double *>*)arg1 ;
-(double)followingSpace;
-(id)initWithLength:(unsigned long long)arg1 thickness:(double)arg2 position:(long long)arg3 followingSpace:(double)arg4 ;
-(BOOL)spansStack;
-(id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(_wrap_iter<double *>*)arg2 iterMax:(_wrap_iter<double *>*)arg3 previousRow:(id)arg4 layoutManager:(const EQKitLayoutManager*)arg5 ;
-(unsigned long long)columnCount;
@end

