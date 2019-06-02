/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKSampleCountQueryClientInterface.h>

@class NSSet, NSString;

@interface HKSampleCountQuery : HKQuery <HKSampleCountQueryClientInterface> {

	/*^block*/id _resultsHandler;
	NSSet* _sampleTypes;

}

@property (nonatomic,copy,readonly) NSSet * sampleTypes;              //@synthesize sampleTypes=_sampleTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
+(Class)configurationClass;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)initWithSampleTypes:(id)arg1 predicate:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(NSSet *)sampleTypes;
-(void)client_deliverSampleCountDictionary:(id)arg1 forQuery:(id)arg2 ;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end

