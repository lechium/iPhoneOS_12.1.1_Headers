/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BiometricKit/BiometricKit-Structs.h>
@class NSDate;

@interface BiometricKitStatistics : NSObject {

	BOOL _fingerOn;
	BOOL _enrolling;
	BOOL _badImagePerFingerDown;
	NSDate* _enrollmentStarTime;
	unsigned _touchesPerEnroll;
	unsigned _badImagesPerEnroll;
	unsigned _rejectedImagesPerEnroll;
	unsigned _primaryClusterAdditions;
	unsigned _primaryClusterFailedAdditions;
	unsigned _otherClustersAdditions;
	unsigned _joinEvents;
	double _area;
	double _primaryClusterArea;

}
+(id)statistics;
-(void)statusMessage:(unsigned)arg1 ;
-(void)enrollProgress:(id)arg1 ;
-(void)enroll:(int)arg1 ;
-(void)initEnrollmentValues;
-(void)enrollResult:(id)arg1 componentSet:(SCD_Struct_Bi0*)arg2 ;
-(id)init;
@end

