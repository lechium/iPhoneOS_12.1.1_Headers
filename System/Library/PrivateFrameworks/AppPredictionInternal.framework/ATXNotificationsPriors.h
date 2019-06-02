/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, ATXApp2VecMapping;

@interface ATXNotificationsPriors : NSObject {

	NSDictionary* _parameters;
	double _defaultPrior;
	ATXApp2VecMapping* _appFeatures;

}
+(id)sharedInstance;
-(id)initWithAssetClass:(Class)arg1 andPathToAppFeatures:(id)arg2 ;
-(double)getPriorForAppId:(id)arg1 ;
-(double)getAppBiasForBundleId:(id)arg1 ;
-(id)init;
@end
