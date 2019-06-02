/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BiometricKit-Structs.h>
#import <BiometricKit/BKEnrollOperation.h>

@class BiometricKitStatistics;

@interface BKEnrollTouchIDOperation : BKEnrollOperation {

	BiometricKitStatistics* _statistics;
	SCD_Struct_Bi1* _compSet;

}

@property (assign,nonatomic,__weak) id<BKEnrollTouchIDOperationDelegate> delegate; 
-(BOOL)startWithError:(id*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)createEnrollProgressInfo:(unsigned)arg1 ;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
-(void)dealloc;
@end

