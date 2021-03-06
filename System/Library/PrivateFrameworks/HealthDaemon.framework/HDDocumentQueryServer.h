/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSArray;

@interface HDDocumentQueryServer : HDQueryServer {

	BOOL _suspended;
	NSArray* _authorizedSamples;
	unsigned long long _clientSampleIndex;
	BOOL _includeDocumentData;
	unsigned long long _maxResults;
	NSArray* _sortDescriptors;

}

@property (nonatomic,readonly) unsigned long long maxResults;              //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) NSArray * sortDescriptors;                  //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,readonly) BOOL includeDocumentData;                   //@synthesize includeDocumentData=_includeDocumentData - In the implementation block
+(id)requiredEntitlements;
+(Class)queryClass;
-(unsigned long long)maxResults;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5 ;
-(BOOL)includeDocumentData;
-(BOOL)_deliverOneSample:(id)arg1 client:(id)arg2 errorOut:(id*)arg3 ;
-(void)_queue_start;
-(id)samplesBeforeAuthorizationWithSortDescriptors:(id)arg1 errorOut:(id*)arg2 ;
-(BOOL)_deliverAuthorizedSamplesToClient:(id)arg1 errorOut:(id*)arg2 ;
-(void)authorizeSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)sortDescriptors;
@end

