/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NDNewsServiceClient.h>

@protocol NDNewsServiceClient;
@class NSString;

@interface NDNewsServiceConnectionClientProxy : NSObject <NDNewsServiceClient> {

	id<NDNewsServiceClient> _client;

}

@property (assign,nonatomic,__weak) id<NDNewsServiceClient> client;              //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)serviceHasNewTodayResults;
-(id<NDNewsServiceClient>)client;
-(void)setClient:(id<NDNewsServiceClient>)arg1 ;
@end

