/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPCloudRequest <NSObject>
@property (nonatomic,readonly) BOOL shouldEnqueueDependenciesWhenPerformingAsCloudRequest; 
@optional
-(unsigned long long)maximumRetries;

@required
-(void)addCloudAccessCompletionBlock:(/*^block*/id)arg1;
-(void)setNetworkBehaviorIsDiscretionary:(BOOL)arg1;
-(BOOL)shouldEnqueueDependenciesWhenPerformingAsCloudRequest;

@end

