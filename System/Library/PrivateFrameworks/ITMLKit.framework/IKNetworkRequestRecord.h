/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IKNetworkRequestRecord <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long resourceType; 
@property (nonatomic,readonly) long long initiatorType; 
@required
-(long long)resourceType;
-(void)didReceiveData:(id)arg1;
-(long long)initiatorType;
-(void)willSendRequest:(id)arg1;
-(void)didCompleteLoadingFromCache:(long long)arg1 withResponseBody:(id)arg2 mimeType:(id)arg3;
-(void)didReceiveResponse:(id)arg1 timingData:(id)arg2;
-(void)didCompleteLoadingWithResponseBody:(id)arg1;
-(void)didFailWithError:(id)arg1;
-(NSString *)identifier;

@end
