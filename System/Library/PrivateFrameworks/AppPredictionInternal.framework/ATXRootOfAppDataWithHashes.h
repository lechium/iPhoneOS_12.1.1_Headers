/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXRootOfAppData.h>

@class NSMutableDictionary;

@interface ATXRootOfAppDataWithHashes : ATXRootOfAppData {

	NSMutableDictionary* _dataForBundleId;

}
-(unsigned long long)sessionCountForBundleId:(id)arg1 ;
-(unsigned long long)sessionCountForBundleId:(id)arg1 firstAction:(id)arg2 ;
-(void)recordSessionWithBundleId:(id)arg1 firstAction:(id)arg2 ;
-(id)initWithSerialized:(id)arg1 ;
-(id)serialize;
-(id)init;
-(id)description;
@end

