/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXActionValuation : NSObject
-(id)getCurrentLocation;
-(BOOL)shouldPredictSendMessageIntent:(id)arg1 ;
-(BOOL)shouldPredictRequestRideIntent:(id)arg1 ;
-(BOOL)shouldPredictIntent:(id)arg1 ;
-(void)scoreAndFilterActions:(id)arg1 actionStatistics:(id)arg2 scoreLogger:(id)arg3 ;
@end

