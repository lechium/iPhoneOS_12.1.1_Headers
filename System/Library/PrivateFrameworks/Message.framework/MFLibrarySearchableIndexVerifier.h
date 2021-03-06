/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFLibrarySearchableIndexVerifierDataSource, OS_os_activity;
@class NSObject;

@interface MFLibrarySearchableIndexVerifier : NSObject {

	id<MFLibrarySearchableIndexVerifierDataSource> _dataSource;
	NSObject*<OS_os_activity> _spotlightVerificationActivity;

}

@property (nonatomic,retain) NSObject*<OS_os_activity> spotlightVerificationActivity;                       //@synthesize spotlightVerificationActivity=_spotlightVerificationActivity - In the implementation block
@property (assign,nonatomic,__weak) id<MFLibrarySearchableIndexVerifierDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)verifyDataSamplesWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)_failingSamples:(id)arg1 tester:(id)arg2 ;
-(void)_addFailingSamples:(id)arg1 toResultDictionary:(id)arg2 ;
-(id)_verifySamples:(id)arg1 ;
-(NSObject*<OS_os_activity>)spotlightVerificationActivity;
-(void)setSpotlightVerificationActivity:(NSObject*<OS_os_activity>)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id<MFLibrarySearchableIndexVerifierDataSource>)dataSource;
-(void)setDataSource:(id<MFLibrarySearchableIndexVerifierDataSource>)arg1 ;
@end

