/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOABAssignmentResponse;


@protocol GEOExperimentServerProxy <NSObject>
@property (assign,nonatomic,__weak) id<GEOExperimentServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOABAssignmentResponse * experimentsInfo; 
@required
-(GEOABAssignmentResponse *)experimentsInfo;
-(void)abAssignUUIDWithCompletionHandler:(/*^block*/id)arg1;
-(void)forceUpdate;
-(void)refreshDatasetABStatus:(id)arg1;
-(void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
-(void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
-(void)_debug_fetchAllAvailableExperiments:(/*^block*/id)arg1;
-(void)setDelegate:(id)arg1;
-(id<GEOExperimentServerProxyDelegate>)delegate;
-(id)initWithDelegate:(id)arg1;

@end
